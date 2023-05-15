// Here we learn about the basic structure and input output formats of the c++
// #include<iostream>
// #include<string>
// #include<vector>
// no need to include each and every library like this we have a library which contains all the required libraries which we are going to use in C++ that is bits/stdc++.h

#include<bits/stdc++.h>
using namespace std;

int main(){
    // every c++ program starts from the main function.
    int number;
    cout<<"Enter a number: "<<endl;
    cin>>number;
    // cin  is used to take the input from the user
    // cout is used to display the output 
    cout<<"The number is : "<<number<<endl;
    return 0;
    // return statement uses to return any value from the function or to terminate the function
}