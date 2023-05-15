// there are three different types of loops are their 
// for loop, while loop, do while loop
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    int sum =0;
    int mul=1;
    int division =90;
    for(int i=0; i<=n; i++){
        // for loop we using for summation here
        sum += i;
    }
    cout<<"Summation of numbers "<<sum<<endl;
    int j=1;
    while(mul<20){
        mul *= j;
        j++;
    }
    cout<<"multiplication of numbers "<<mul<<endl;
    int k =10;
    do{
        division /= k;
        k++;
    }while(division>10);
    cout<<"division is "<<division<<endl;


}