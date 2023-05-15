/*
    linear search : return the index of the given element if present or -1 
    using for loop to traverse the array and comparing each element with the given key element if matches then return it's index if not return -1 as element not present int the array  
*/

#include<bits/stdc++.h>
using namespace std;

int linear_search(int arr[], int n, int k){
    for(int i=0; i<n; i++){
        if(arr[i] == k)
        {
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter the size of the array ";
    cin>>n;
    int arr[n];
    cout<<"Enter"<<n<<" elements in to the array"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter key to find ";
    cin>>k;
    int output = linear_search(arr, n, k);
    cout<<"element present at index "<<output;
    return 0;
}