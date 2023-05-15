/*
    *
    * *
    * * *
    * * * *
    * * * * *
    * * * * *  
    * * * *
    * * * 
    * *
    * 
*/

// the combination of previous two patterns


#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no. of rows"<<endl;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    for(int i=n; i>=0; i--){
        for(int j=0; j<i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}