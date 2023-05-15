/*
         *     
       * * *  
     * * * * * 
   * * * * * * * 
*/

/*
    we use three loops to print spaces and stars
    space loop              --> j=0; j<n-i-1
    star loop               --> j=0; j<2*i+1
    and again space loop    --> j=0; j<n-i-1
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter no. of rows"<<endl;
    cin>>n;
    for(int i=0; i<n; i++){
        //spaces
        for(int j =0; j<n-i-1; j++){
            cout<<"  ";
        }
        // stars
        for(int j=0; j<2*i+1; j++){
            cout<<"* ";
        }
        // spaces
        for(int j =0; j<n-i-1; j++){
            cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}