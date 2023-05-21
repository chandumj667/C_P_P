/*
    Find the missing and duplicate numbers in the array from 1 to n
    Given an unsorted array of size n. Array elements are in the range of 1 to n. One number from set {1, 2, …n} is missing and one number occurs twice in the array. Find these two numbers.

    brute force : sort the array if the i and i+1 index elements same then the element is repeating and if ith index not equal to (i+1) like 5th index should be element 6 if not it is the missing element
        time complexity : O(nlogn)
        space complexity: O(1)

    optimal : using hashmap by maintaining frequency of each element if the element have >1 then it is repeating if the element have <1 then it is the missing element
        time complexity : O(n)
        space complexity : O(n)
    
    better : using the math as the numbers ranges from 1 to n then 
        sum up all of the with the formula of (n*(n+1))/2 = s
        and sum up their squares as (n*(n+1)(2n+1))/6 = ss
        then s - sum of all the  elements in the array(x) = y ==> s-x = y ==> s = x-y
        square them s^2 - x^2 = y^2  ==> x^2 - y^2 = s^2 
        x^2 - y^2 = s^2  = k
        x   - y   = s
        (x-y)(x+y) = k
        (s)(x+y) = k
        (x+y) = k/s;
        substitute x+y in equation (x-y)(x+y) = k ==> (x-y)(k/s) = k then we get missing number and repeating number 
        but not easy to implement 

    most optimal : using xor. declare the  xor as 0 traverse the array and xor all the elements we get a number x then xor the elements from 1 to n with this x 
*/


#include<bits/stdc++.h>
using namespace std;

void first(int arr[], int n){
    unordered_map<int, int>ump;
    for(int i=0; i<n; i++){
        ump[arr[i]]++;
    }
    cout<<endl<<"Using optimal "<<endl;
    for(auto i: ump){
        if(i.second == 0){
            cout<<"Missing number is "<<i.first<<endl;
        }
        else if(i.second >1){
            cout<<"Duplicate number is "<<i.first<<endl;
        }
        
    }
}

void brute(int arr[], int n){
    sort(arr, arr+n);
    cout<<endl<<"Using brute force "<<endl;
    for(int i=0; i<n; i++){
        if(arr[i] == arr[i+1]){
            cout<<"Duplicate number is "<<arr[i]<<endl;
        }
        else if(arr[i] != i+1){
            cout<<"Missing number is "<<i+1<<endl;
            break;
        }
    }
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
    brute(arr, n);
    first(arr, n);
    return 0;
}
