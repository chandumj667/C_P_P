/*
    maximum element till ith index of the array
    it is commonly called as greatest element to left
    updates of this problem is max-rain in the building

    by checking current element to its previous if curr<prev then replace the current with prev.
    as the first element or zero index one is the left most element we start traversing from 1.

    time complexity : O(n)
    space complexity: O(1)
*/

#include<bits/stdc++.h>
using namespace std;

void print(vector<int>vec, int n){
    for (int i = 0; i < n; i++){
        cout << vec[i] << " ";
    }
}

void solve(vector<int>vec, int n){
    for (int i = 1; i < n; i++){
        if(vec[i]<vec[i-1]){
            vec[i] = vec[i - 1];
        }
    }
    print(vec, n);
}

int main(){
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++){
        cin>>vec[i];
    }
    solve(vec, n);
    return 0;
}