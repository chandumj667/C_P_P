/*
    Rotate the matrix by 90 degrees
    given matrix is a square matrix (n*n)

    logic : there are two steps to solve this problem
        step 1: transpose the given matrix as it is a square matrix you just need to swap the places 
                swap(vec[i][j], vec[j][i])
        step 2:
                2.1 if the rotation is clock-wise then reverse the rows in the transpose matrix
                2.2 if the rotation is anti-clockwise then reverse the cols in the transpose matrix
        
    time complexity : O(N*N)
    space complexity : O(1) 
*/

#include<bits/stdc++.h>
using namespace std;

void print(vector<vector<int>>vec, int n, int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
}

void solve(vector<vector<int>>vec, int n, int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            swap(vec[j][i], vec[i][j]);
        }
    }
    // cout<<"transpose"<<endl;
    // print(vec, n, m);

    // if the rotation is clock-wise 90deg
    for(int i=0; i<n; i++){
        reverse(vec[i].begin(), vec[i].end());
    }
    cout<<"rotate clockwise "<<endl;
    print(vec, n, m);

    // if the rotation is anti-clockwise
    for(int i=0; i<(n/2); i++){
        for(int j=0; j<n; j++){
            swap(vec[i][j], vec[n-1-i][j]);
        }
    }
    cout<<"rotation in anti clock wise"<<endl;
    print(vec, n, m);


}

int main(){
    int n;
    int m;
    cout<<"\nEnter the row and col size of the matrix with space separated intergers ";
    cin>>n>>m;
    vector<vector<int>>vec;
    cout<<"Enter the elements in to the matrix of size "<<n<<" rows and "<<m<<" columns"<<endl;
    for(int i=0; i<n; i++){
        vector<int>in;
        for(int j=0; j<m; j++){
            int ele;
            cin>>ele;
            in.push_back(ele);
        }
        vec.push_back(in);
    }
    solve(vec, n, m);
    return 0;
}