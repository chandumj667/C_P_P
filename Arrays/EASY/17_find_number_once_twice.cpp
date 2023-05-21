/*
    Find the number that appears once, and the other numbers twice
    Problem Statement: Given a non-empty array of integers arr, every element appears twice except for one. Find that single one.

    Examples:

    Example 1:
    Input Format: arr[] = {2,2,1}
    Result: 1
    Explanation: In this array, only the element 1 appear once and so it is the answer.

    Example 2:
    Input Format: arr[] = {4,1,2,1,2}
    Result: 4
    Explanation: In this array, only element 4 appear once and the other elements appear twice. So, 4 is the answer.

    brute force:
        traverse the array by keeping num as arr[i] and again traverse the array to check if num == arr[j] is present if so then the number appear twice if not it is the number with single appearance
        Time Complexity: O(N*N);
        Space Complexity :O(1);

    Better :
        using hashmap we reduce the  time complexity but we have the space complexity 
        by checking ky value pairs of each number and its occurrence if its occurrence is equal to 1 then that number is the single number
        Time Complexity : O(N)
        Space Complexity: O(N)

    Optimal :
        using XOR operation
        Xor all elements with each then xor of same elements gets 0 and the number with only one occurrence get remain
        Time Complexity : O(N);
        Space Complexity : O(1);
*/

#include<bits/stdc++.h>
using namespace std;

int brute(vector<int>vec, int n){
    for(int i=0; i<n; i++){
        int num = vec[i];
        int count = 0;
        for (int j = 0; j < n; j++){
            if(vec[j] == num){
                count++;
            }
        }
        if(count ==1)
            return num;
    }
    return -1;
}


int optimal(vector<int>vec, int n){
    int ans = 0;
    for(int i=0; i<n; i++){
        ans = ans ^ vec[i];
    }
    return ans;
}

int better(vector<int>vec, int n){
    unordered_map<int, int>ump;
    for (int i = 0; i<n; i++){
        ump[vec[i]]++;
    }
    for(auto i:ump){
        if(i.second ==1)
            return i.first;
    }
    return -1;
}
int binary(vector<int>vec, int n){
    int s = 0;
    int e = n - 1;
    while(s<e){
        int mid = s + (e - s) / 2;
        if(vec[mid]%2 == 1){
            mid--;
        }
        if(vec[mid] != vec[mid+1]){
            e = mid;
        }
        else{
            s = mid + 2;
        }
        mid = s + (e - s) / 2;
    }
    return vec[s];
}

int main(){
    int n;
    cout << "Enter the size of the array ";
    cin>>n;
    vector<int>vec(n);
    for (int i = 0; i<n; i++){
        cin >> vec[i];
    }
    cout << "Using brute force appr " << brute(vec, n)<<endl;
    cout << "Using better approach " << better(vec, n)<<endl;
    cout << "Using Optimal approach " << optimal(vec, n)<<endl;
    cout << "Using binary approach " << binary(vec, n);

    return 0;
}