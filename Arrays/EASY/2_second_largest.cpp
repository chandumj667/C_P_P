/*
    find the second largest element in the array

    brute force solution : using sorting and accessing the element from the end if the last but one is not equal to the last compare them as n-2 to 0 by traversing a loop
                    time complexity : O(n Log n) + O(n)
                    space complexity : O(n)
    
    optimal solution : first find the largest (large) among all the elements in the given array it takes O(n) and then traverse the array again and use the logic with extra variable(sec_large) as (arr[i]>sec_large && arr[i]<large) it again takes O(n) time 
                    time complexity : O(2n)
                    space complexity : O(n)

    
*/

#include<bits/stdc++.h>
using namespace std;

void brute(int arr[], int n){
    sort(arr, arr+n);
    for(int i=n-2; i>=0; i--){
        if(arr[i]!=arr[i+1]){
            cout<<"Second largest "<<arr[i];
            break;
        }
    }
}

void optimal(int arr[], int n){
    int large = INT_MIN;
    int sec_large = INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>large){
            large = arr[i];
        }
    }
    // cout<<large<<endl;
    for(int i=0; i<n; i++){
        if(arr[i]>sec_large && arr[i]<large){
            sec_large = arr[i];
        }
    }
    cout<<"the second largest element is "<<sec_large<<endl;
}

int main(){
    int n;
    cout<<"Enter the size of the array ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements in to the array"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // brute(arr, n);
    optimal(arr, n);
    return 0;
}