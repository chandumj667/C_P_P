/*
    spirally traverse the matrix
    given a matrix we should traverse it  spirally 
    example :   1   2   3   4
                5   6   7   8
                9  10  11  12
                13 14  15  16

        output : 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
*/

#include<bits/stdc++.h>
using namespace std;

void print(vector<int>vec){
    for(int i=0; i<vec.size(); i++){
        cout<<vec[i]<<" ";
    }
}

void solve(vector<vector<int>>vec, int n, int m){
    int top =0;
    int bottom =n-1; 
    int left = 0;
    int right = m-1;
    vector<int>ans;
    while(top<=bottom && left <= right){
        for(int i=left; i<=right; i++){
            ans.push_back(vec[top][i]);
        }
        top++;
        for(int i=top; i<=bottom; i++){
            ans.push_back(vec[i][right]);
        }
        right--;

        if(top<=bottom){
            for(int i=right; i>=left; i--){
                ans.push_back(vec[bottom][i]);
            }
            bottom--;
        }
        if(left<=right){
            for(int i=bottom; i>=top; i--){
                ans.push_back(vec[i][left]);
            }
            left++;
        }
    }
    print(ans);
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