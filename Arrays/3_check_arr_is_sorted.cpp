/*
    check the array is sorted or not 
    traverse the array and check the neighbour elements if the are arranged in sorted order or not
    write a boolean function
    time complexity  : O(n)
    space complexity : O(1)
*/

#include<bits/stdc++.h>
using namespace std;

bool check_arr(int arr[], int n){
    for(int i=1; i<n; i++){
        if(arr[i]<arr[i-1])return false;
    }
    return true;
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

    if(check_arr(arr, n)){
        cout<<"Yes, the array is in sorted order"<<endl;
    }
    else{
        cout<<"No, the array is not in sorted order"<<endl;
    }
}