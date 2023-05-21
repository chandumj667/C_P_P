/*
    find the largest element in the array

    brute force : using sorting :---> 
                    Time complexity : O(n log n)
                    space complexity : O(n)
                    
    optimal     : using a variable to compare every element if it is largest we replace the element inside that variable if not we skip and move to the  next index 
                    Time complexity : O(n)
                    space complexity : O(n)
*/

#include<bits/stdc++.h>
using namespace std;

void brute_force(int arr[], int n){
    sort(arr, arr+n);
    cout<<"Using brute_force solution we get the largest element from the array "<<arr[n-1]<<endl;
}

void optimal(int arr[], int n){
    int maxi = INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>maxi){
            maxi = arr[i];
        }
    }
    cout<<"Using optimal solution we get the largest element from the array "<<maxi<<endl;
}

int main(){
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter "<<n<<" Elements in to array"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    brute_force(arr, n);
    optimal(arr, n);
    return 0;
}