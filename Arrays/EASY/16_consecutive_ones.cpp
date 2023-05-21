/*
    Count Maximum Consecutive One’s in the array
    Problem Statement: Given an array that contains only 1 and 0 return the count of maximum consecutive ones in the array.

    Examples:

    Input: prices = {1, 1, 0, 1, 1, 1}
    Output: 3
    Explanation: There are two consecutive 1’s and three consecutive 1’s in the array out of which maximum is 3.

    Input: prices = {1, 0, 1, 1, 0, 1}
    Output: 2
    Explanation: There are two consecutive 1's in the array.



    approach :
        by maintaining two variables of count and maxi
        increment count if arr[i] == 1
        and compare with maxi = max(maxi, count);
        if arr[i] == 0 then make count =0 because the consecutiveness has broken 

    Time complexity : O(N)
    space complexity : O(1)
*/


#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>vec, int n){
    int count =0;
    int maxi = 0;
    for (int i = 0; i < n; i++){
        if(vec[i] == 1){
            count++;
        }else{
            count = 0;
        }
        maxi = max(maxi, count);
    }

    return maxi;
}


int main(){
    int n;
    cout << "enter the size of the array ";
    cin>>n;
    vector<int> vec(n);
    for (int i = 0; i<n; i++){
        cin >> vec[i];
    }
    cout << solve(vec, n);
    return 0;
}