/*
    remove duplicate values in a sorted array in place 
    brute force : using hashmap or set 
        time complexity : O(n log n) + O(n)
        space complexity : O(n)

    optimal : using two pointer approach
        time complexity : O(n)
        space complexity : O(1)
*/

#include<bits/stdc++.h>
using namespace std;

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}


// void brute_force(int arr[], int n){
//     set<int>s;
//     for(int i=0; i<n; i++){
//         s.insert(arr[i]);
//     }
//     int j=0;
//     while(!s.empty()){
//         arr[j] = *(s.begin());
//         j++;
//     }
//     print(arr, j);
// }

void optimal(int arr[], int n){
    int low =0;
    int high=1;
    while(high<n){
        if(arr[low]!=arr[high]){
            low++;
            arr[low] = arr[high];
        }
        high++;
    }
    print(arr, low+1);
}

int main(){
    int n;
    cout<<"Enter the size of the array ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements in an sorted order in to array"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    // brute_force(arr, n);
    optimal(arr, n);
}
