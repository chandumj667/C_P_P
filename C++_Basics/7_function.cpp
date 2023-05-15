// functions are used to maintain the code as a separate block where each of the block belongs at one place
// reusability, modularity and code quality

// functions with parameters without parameters
// functions with return type without return type(void function)
#include<bits/stdc++.h>
using namespace std;

// function declaration and function define
int fact(int n){
    // n is parameter
    if(n<=1)return 1;
    return n*fact(n-1);
}
int sum(int &n){
    n = n/10;
    return n;
}
int main(){
    int n;
    cin>>n;
    int  number =n;
    n = fact(n);
    cout<<"Factorial of "<<number<<" is "<<n<< " it is pass by value"<<endl;
    // fact(n)  is function calling
    // here n is argument
    cout<<"function with pass  by reference "<<sum(n)<<endl;

    cout<<n;
    return 0;
}