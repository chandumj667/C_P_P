/*
    pattern 1
    * * * * 
    * * * *
    * * * * 
    * * * *
*/


#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    int m;
    cout<<"enter the no of rows and no of columns"<<endl;
    cin>>n>>m;
    for(int i=0; i<n; i++){
        for(int  j=0; j<m; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}