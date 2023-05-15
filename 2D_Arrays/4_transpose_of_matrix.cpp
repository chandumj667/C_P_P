/*
    Transpose of a matrix 
    changing rows as columns and columns as rows

    example :
            1  2  3  4
            5  6  7  8
            9 10 11 12
    output :
            1 5 9
            2 6 10
            3 7 11
            4 8 12
    
    logic : take a new_matrix(m, n) and traverse the old_matrix(n, m) and change the index of i and j values as  j and i and insert the respective values in to the new_matrix.
        let i = 3, j = 4 take the value which is in old_matrix as element
            i = 4, j = 3 and insert that element in these indices in new_matrix

    time complexity : O(N*M)
    space complexity : O(N*M)


    Note : if the matrix is a [square matrix]we just need to swap the elements only as outer_loop(i) runs from 0 to n where as inner_loop(j) runs from 0 to j<i or j<=i and just swap the elements
        for(int i=0; i<n; i++){
            for(int j=0; j<i; j++){
                swap(vec[i][j], vec[j][i]);
            }
        }

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
    vector<vector<int>>new_mat(m, vector<int>(n));
    for(int i=0; i<n; i++){
        vector<int>in;
        for(int j=0; j<m; j++){
            // in.push_back(vec[i][j]);
            // swap(vec[j][i], vec[i][j]);
            new_mat[j][i] = vec[i][j];
        }
        // new_mat.push_back(in);
    }
    print(new_mat, m, n);
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