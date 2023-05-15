/*
    Intersection of two sorted arrays
    only the elements present in both the arrays and rep of corresponding elements are allowed
    
    brute force : using an extra array as visited array
    time : O(N*M)
    space : O(N+M)

    optimal : using two pointers as i for one array and j for another array
        if arr[i] == arr[j] insert it in to the intersection_arr i++ nad j++
        if arr[i] < arr[j] i++
        if arr[i] > arr[j] j++
    at last either of the two arrays get complete its traversal then stop checking return the resultant array or intersection_arr
    time : O(n+m)
    space : O(1)
*/
#include<bits/stdc++.h>
using namespace std;

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void solve(int arr1[], int arr2[], int n, int m){
    int i=0; int j=0;
    int z = max(n, m);
    int k=0;
    int intersection[z];
    while(i<n && j<m){
        if(arr1[i] == arr2[j]){
            intersection[k] = arr1[i];
            k++;
            i++;
            j++;
        }
        else if(arr1[i] < arr2[j]) i++;
        else if(arr1[i] > arr2[j]) j++;
    }
    cout<<"The output is "<<endl;
    print(intersection, k);
}

int main(){
    int n;
    cout<<"Enter the size of first array ";
    cin>>n;
    int arr1[n];
    cout<<"Enter "<<n<<" elements in to the array 1"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }
    int m;
    cout<<"Enter the size of the second array ";
    cin>>m;
    int arr2[m];
    cout<<"Enter "<<m<<" elements in to the array 2"<<endl;
    for(int i=0; i<m; i++){
        cin>>arr2[i];
    }
    solve(arr1, arr2, n, m);
    return 0;
}