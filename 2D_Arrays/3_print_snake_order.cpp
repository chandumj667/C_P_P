/*
    print the matrix in snake order 
    example: 
        1 2 3 4 
        5 6 7 8
        9 10 11 12
    output :
        1 2 3 4 8 7 6 5 9 10 11 12

    logic : 
        if i%2 == 0 then start the j loop from 0 to m-1
        if i%2 != 0 then start the j loop from m-1 to 0
        and print arr[i][j] every time

    Time complexity : O(N*M)
    space complexity : O(1)
*/

#include<bits/stdc++.h>
using namespace std;

void solve(vector<vector<int>>&vec, int n, int m){
    for(int i=0; i<n; i++){
        if((i % 2) == 0){
            for(int j=0; j<m; j++){
                cout<<vec[i][j]<<" ->";
            }
        }
        else{
            for(int j=m-1; j>=0; j--){
                cout<<vec[i][j]<<" ->";
            }
        }
    }
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
