/*
    *
    * *
    * * *
    * * * *
    * * * * *
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter the no of rows"<<endl;
    cin>>n;
    for(int i=0; i<=n; i++){
        for(int j=0; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}