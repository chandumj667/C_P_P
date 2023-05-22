/*
    Longest Subarray with sum K | [Postives and Negatives]
    Problem Statement: Given an array and a sum k, we need to print the length of the longest subarray that sums to k.

    Examples:

    Example 1:
    Input Format: N = 3, k = 5, array[] = {2,3,5}
    Result: 2
    Explanation: The longest subarray with sum 5 is {2, 3}. And its length is 2.

    Example 2:
    Input Format: N = 3, k = 1, array[] = {-1, 1, 1}
    Result: 3
    Explanation: The longest subarray with sum 1 is {-1, 1, 1}. And its length is 3.


    
    brute force :
        generate all the possible sub-arrays
        using nested loops i = 0 to n and inner loop j = i  to n
        then between the ith and jth index elements form a sub-array
        then find the max sub-array with sum of all elements in it is equal to given k

        Time complexity : O(N*N*N)
        space complexity : O(1)

    better-1:
        by keeping the prefix sum we can reduce the time complexity to O(N*N)
        Time complexity : O(N*N)
        Space Complexity : O(1)

    better-2 :
        using map we store the sum with its indices
        if the sum is equal to the k then we check the index and continue to the summation
        if the sum is x then we have k if the map had x-k in it then get the [x-k] index if it present we get the sub-array
        compare it with the previous length we have get the maximum of it
        Time complexity : O(N log N) as we used ordered Map
        Space Complexity ; O(N)

*/

#include<bits/stdc++.h>
using namespace std;

int brute(vector<int>vec, int n, int k){
    int len = 0;
    for (int i = 0; i<n; i++){
        for(int j=i; j<n; j++){
            int sum = 0;
            for (int r = i; r < j; r++){
                sum += vec[r];
            }
            if(sum == k){
                len = max(len, j - i);
            }
        }
    }
    return len;
}


int better_1(vector<int>vec, int n, int k){
    int len = 0;
    for (int i = 0; i<n; i++){
        int sum = 0;
        for (int j = 0; j<n;  j++){
            sum += vec[i];
            if(sum == k){
                len = max(len, j - i+1);
            }
        }
    }
    return len;
}


int better_2(vector<int>vec, int n, int k){
    map<long long, int>pf;
    long long sum =0;
    int len = 0;
    for (int i = 0; i<n; i++){
        sum += vec[i];
        if(sum == k){
            len = max(len, i + 1);
        }
        long long rem = sum-k;
        if(pf.find(rem) != pf.end()){
            int le = i - pf[rem];
            len = max(len, le);
        }
        if(pf.find(sum) == pf.end()){
            pf[sum] = i;
        }
    }
    return len;
}



int main(){
    int n;
    cout << "Enter the size of the array ";
    cin >> n;
    vector<int>vec(n);
    cout << "Enter " << n << " elements in to array" << endl;
    for (int i = 0; i<n; i++){
        cin >> vec[i];
    }
    int k;
    cout << "Enter the sum (K) ";
    cin >> k;
    cout << endl;
    cout << "Brute force approach : " << brute(vec, n, k) << endl;
    cout << "Better 1 approach : " << better_1(vec, n, k) << endl;
    cout << "Better 2 approach : " << better_2(vec, n, k) << endl;

    return 0;
}