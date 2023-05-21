/*
    left rotate an array by 1 place
    brute force : taking an extra array of size n+1 insert all the element in to the new array and also again insert the zeroth index element of the old array in to the new array at last index and traverse the new array from index 1 to n+1;
        time complexity : O(N)
        space complexity : O(N)
    using an extra variable to shit all the values  to previous places and the zeroth index element in to the temp variable
        time complexity : O(N)
        space complexity : O(1)
    
*/

#include<bits/stdc++.h>
using namespace std;

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void brute_force(int arr[], int n){
    int new_arr[n];
    for(int i=1; i<n; i++){
        new_arr[i-1] = arr[i];
    }
    new_arr[n-1] = arr[0];
    print(new_arr, n);
}

void optimal(int arr[], int n){
    int temp = arr[0];
    for(int i=1; i<n; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1]=temp;
    print(arr, n);
}

int main(){
    int n;
    cout<<"enter the size of the array ";
    cin>>n;
    int arr[n];
    cout<<"Enter the "<<n<<" elements in to the array"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"brute force "<<endl;
    brute_force(arr, n);
    cout<<"\noptimal "<<endl;
    optimal(arr, n);
    return 0;
}