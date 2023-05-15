/*
    sum of all the elements in the matrix
    traverse each row and sum all the elements and repeat it for every row then sum the result of each row

    time complexity : O(n*m)
    space complexity : O(1)
*/

#include<bits/stdc++.h>
using namespace std;


int solve(vector<vector<int>>&vec, int n, int m){
    int ans =0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            ans += vec[i][j];
        }
    }
    return ans;
}

int main(){
    int n;
    int m;
    cout<<"Enter the row and col size of the matrix"<<endl;
    // vector<vector<int>>vec(n, vector<int>(m));
    cin>>n>>m;
    vector<vector<int>>vec;
    int temp;
    cout<<"Enter the elements in to the matrix "<<endl;
    for(int i=0; i<n; i++){
        vector<int>in;
        // Here we use another vector to insert all the values in to a single dimension array or vector and then we push back entire row in to the 2D vector with C++ STL
        for(int j=0; j<m; j++){
            cin>>temp;
            in.push_back(temp);
            // pushing each element in to a single row as 1D matrix
        }
        vec.push_back(in);
        // pushing the entire row. 
    }
    int ans = solve(vec, n, m);
    cout<<"sum of all the elements in the matrix "<<ans;
    return 0;
}