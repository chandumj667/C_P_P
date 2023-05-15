/*
   * * * * * * * 
     * * * * * 
       * * *  
         *    
*/

/*
    we use three loops to print spaces and stars
    space loop              --> j=0; j<i
    star loop               --> j=0; j<2*n-(2*i+1)
    and again space loop    --> j=0; j<i
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter no. of rows"<<endl;
    cin>>n;
    for(int i=0; i<n; i++){
        //spaces
        for(int j =0; j<i; j++){
            cout<<"  ";
        }
        // stars
        for(int j=0; j<2*n-(2*i+1); j++){
            cout<<"* ";
        }
        // spaces
        for(int j =0; j<i; j++){
            cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}