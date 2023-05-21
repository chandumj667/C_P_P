/*
    Find the missing number in an array
    Problem Statement: Given an integer N and an array of size N-1 containing N-1 numbers between 1 to N. Find the number(between 1 to N), that is not present in the given array.

    Examples:

    Example 1:
    Input Format: N = 5, array[] = {1,2,4,5}
    Result: 3
    Explanation: In the given array, number 3 is missing. So, 3 is the answer.

    Example 2:
    Input Format: N = 3, array[] = {1,3}
    Result: 2
    Explanation: In the given array, number 2 is missing. So, 2 is the answer.

    brute force :
        sort the array and check with respective of it's indices
        Time Complexity : O(Log N)
        Space Complexity : O(1);
        
    Better approach: 
        Using hashmap or map to store the count of each element from 1 to N and traverse the map check whether any element had with zero occurrence if so return it as missing number
        Time Complexity : O(N)
        Space Complexity : O(N)

    Optimal :
        Hint is  the numbers in this array lies between 1 to n where n is the size of the array
        therefore sum of n natural numbers is SN = (n*n+1)/2
        then sum of all the elements in the array as sum
        sum - SN gives the difference and that is the missing number;
*/

#include<bits/stdc++.h>
using namespace std;

int brute(vector<int>vec, int n){
    cout << "Brute force approach :";
    sort(vec.begin(), vec.end()-1);
    for (int i = 0; i<n-1; i++){
        if(vec[i] != i+1)
            return i + 1;
    }
    return -1;
}

int better(vector<int>vec, int n){
    cout << "Better approach ";
    // unordered_map<int, int> ump;
    int arr[n - 1] = {0};
    for (int i = 0; i<n-1; i++){
        arr[vec[i]]++;
    }
    for (int i = 1; i<=n; i++)
    {
        if(arr[i] ==0)
            return i;
    }
    // return -1;
}

int optimal(vector<int>vec, int n){
    cout << "Optimal approach ";
    int s = (n * (n + 1)) / 2;
    int ss = 0;
    for(int i=0; i<n-1; i++){
        ss += vec[i];
    }
    int ans = s - ss;
    return ans;
}


int main(){
    int n;
    cout<<"Enter the size of the array ";
    cin>>n;
    vector<int>vec(n);
    cout<<"Enter the elements in to the array "<<endl;
    for (int i = 0; i<n-1; i++){
        cin >> vec[i];
    }
    cout<<brute(vec, n)<<endl;
    cout<<better(vec, n)<<endl;
    cout<<optimal(vec, n)<<endl;

    return 0;
}
