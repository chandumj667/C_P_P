/*
    Find the duplicate number in the array
    Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
    There is only one repeated number in nums, return this repeated number.
    You must solve the problem without modifying the array nums and uses only constant extra space.

    brute force : sort the array then traverse the array and if ele is  not equal to i+1 index then it is the duplicate element
        time complexity : O(Nlog N)
        space complexity : O(1);
    
    better solution : using hashmap count the frequency of each element and traverse the hashmap if any element's frequency greater than 1 then the number is duplicate number
        time complexity : O(n) + O(n)
        space complexity : O(n)

    optimal : Linked list cycle method using two pointers. one point traverse by increment one element while another traverse by two elements.
        when they get collide at an index then take a pointer and assign it to the starting index and parallel increment the two pointers by one step 
    
        time complexity : O(n)
        space complexity : O(1)
*/

#include<bits/stdc++.h>
using namespace std;

int brute_force(int arr[], int n){
    sort(arr, arr+n);
    for(int i=0; i<n-1; i++){
        if(arr[i] == arr[i+1]){
            return arr[i];
        }
    }
    return -1;
}

int better(int arr[], int n){
    unordered_map<int, int>ump(n);
    for(int i=0; i<n; i++){
        ump[arr[i]]++;
    }
    for(auto i:ump){
        if(i.second > 1)return i.first;
    }
    return -1;
}

int optimal(int arr[], int n){
    int slow = arr[0];
    int fast = arr[0];
    do{
        slow = arr[slow];
        fast = arr[arr[fast]];
    }while(slow != fast);
    fast = arr[0];
    while(slow != fast){
        slow = arr[slow];
        fast = arr[fast];
    }
    return slow;
}

int main(){
    int n;
    cout<<"Enter the size of the array ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements in to the array"<<endl;
    for(int i=0;i<n; i++){
        cin>>arr[i];
    }
    cout<<"the duplicate element using different methods "<<endl;
    cout<<"Using Brute Force : "<<brute_force(arr, n)<<endl;
    cout<<"Using better solution : "<<better(arr, n)<<endl;
    cout<<"Using optimal solution : "<<optimal(arr, n)<<endl;
    return 0;
}