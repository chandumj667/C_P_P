/*
    sort 0's 1's and 2's pr sort colors
    Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.
    We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
    You must solve this problem without using the library's sort function.

    brute force : use sorting 
        time complexity: O(n log n)
        space complexity : O(1)

    better  : 
        using counting sort , count the no. of 0's(x) 1's(y) and 2's(z) then traverse the array from 0 to x   assign 0 and x+1 to y assign 1 and y+1 to z assign 2
            time complexity : O(n) + O(n)
            space complexity  : O(1)
    
    optimal : 
            using dutch national flag algorithm its like using three pointers x, y, z 
            start the x and y from 0 and z from last index of the array 
            if arr[y] ==0 swap with arr[x] and x++; y++;
            if arr[y] ==2 swap with arr[z] and y++; z--;
            if arr[y] ==1 y++
                time complexity : O(n)
                space complexity : O(1)
*/


#include<bits/stdc++.h>
using namespace std;

void print(int arr[], int n){
    cout<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void brute(int arr[], int n){
    sort(arr, arr+n);
    print(arr, n);
    cout<<endl;

}

void better(int arr[], int n){
    int zero_count = 0;
    int one_count = 0;
    int two_count = 0;
    for(int i=0; i<n; i++){
        if(arr[i] == 0){
            zero_count++;
        }
        else if(arr[i] == 1){
            one_count++;
        }
        else if(arr[i] == 2){
            two_count++;
        }
    }
    int k =0;
    while(k<zero_count){
        arr[k] == 0;
        k++;
    }
    while(k<one_count){
        arr[k] == 1;
        k++;
    }
    while(k<two_count){
        arr[k] == 2;
        k++;
    }
    print(arr, n);
    cout<<endl;

}

void optimal(int arr[], int n){
    int a=0;
    int b=0;
    int c=n-1;
    while(b<=c){
        if(arr[b] == 0){
            swap(arr[a], arr[b]);
            b++;
            a++;
        }
        else if(arr[b] == 1){
            b++;
        }
        else if(arr[b] == 2){
            swap(arr[b], arr[c]);
            c--;
        }
    }
    print(arr, n);
    cout<<endl;

}

int main(){
    int  n;
    cout<<"Enter the size of the array ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements in to the array "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Using brute_force approach ";
    brute(arr, n);
    cout<<"Using better approach ";
    better(arr, n);
    cout<<"Using Optimal approach ";
    optimal(arr, n);
    return 0;
}
