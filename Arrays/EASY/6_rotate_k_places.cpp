/*
    rotate k elements in the array 
    example arr[] = 1 2 3 4 5 6 7 8 9   k =3
    output        = 4 5 6 7 8 9 1 2 3
    
    brute force : using an extra array 
    time complexity : O(N) + O(k) + O(N-K)
    space complexity : O(N)

    optimal : rotate k elements first and rotate remaining elements next and then rotate the entire array
    as like 
            1 2 3 4 5 6 7 8 9   k = 3
        rotate k elements as 0 to k-1
            3 2 1
        rotate remaining elements k to n-1
                  9 8 7 6 5 4
        the outcome it like
            3 2 1 9 8 7 6 5 4
        then rotate the entire array 0 to n-1
            4 5 6 7 8 9 1 2 3
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

void brute_force(int arr[], int n, int k){
    int new_arr[n];
    int i=k;
    int j=0;
    while(i<n){
        new_arr[j] = arr[i];
        i++;
        j++;
    }
    i =0;
    while(i<k){
        new_arr[j] = arr[i];
        j++;
        i++;
    }
    cout<<"Brute force"<<endl;
    print(new_arr, n);
}

// int reverse(int arr[], int l, int h){
//     while(l<h){
//         swap(arr[l], arr[h]);
//         l++;
//         h--;
//     }
// }

void optimal(int arr[], int n, int k){
    reverse(arr, arr+k);
    reverse(arr+k, arr+n);
    reverse(arr, arr+n);
    cout<<"\noptimal "<<endl;

    print(arr, n);
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
    int k;
    cout<<"Enter no. of elements to rotate ";
    cin>>k;

    brute_force(arr, n, k);
    optimal(arr, n, k);
    return 0;
}