/*
    Search an element in a sorted matrix

    example :   1  2  3  4
                5  6  7  8
                9 10 11 12
    key = 10
    then start the i from 0 to n-1
    j from m-1 to 0
*/

#include<bits/stdc++.h>
using namespace std;

void solve(vector<vector<int>>vec, int n, int m, int key){
    int i =0; 
    int j =m-1;
    while(i<n && j>=0){
        if(vec[i][j] == key){
            cout<<i+1<<" row & "<<j+1<<" column";
            break;
        }
        else if(vec[i][j] > key){
            j--;
        }
        else if(vec[i][j] < key){
            i++;
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
    int key;
    cout<<"enter the key element to search ";
    cin>>key;
    solve(vec, n, m, key);
    return 0;
}