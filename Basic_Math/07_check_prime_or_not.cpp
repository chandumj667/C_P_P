/**
    Check if a number is prime or not
    
    Problem Statement: Given a number, check whether it is prime or not. A prime number is a natural number that is only divisible by 1 and by itself.

    Examples 1 2 3 5 7 11 13 17 19 …

    Examples:

    Example 1:
    Input: N = 3
    Output: Prime
    Explanation: 3 is a prime number

    Example 2:
    Input: N = 26
    Output: Non-Prime
    Explanation: 26 is not prime


    Brute Force :
        traverse fro 1 to n and check for each number whether it is divisible by it or not if divisible increment count if count is equal to 2 then it is prime if count is greater than 2 then it is not a prime number
        
        Time Complexity : O(N)
        Space Complexity : O(1)

    Optimal : 
*/


#include<bits/stdc++.h>
using namespace std;


void brute(int n){
    cout << endl;
    cout << "from brute force approach : ";
    int cnt =0;
    for (int i = 1; i<=n; i++){
        if(n%i == 0){
            cnt++;
        }
    }
    if(cnt==2){
        cout << n << " is prime  number ";
    }else{
        cout << n << " is not a prime number ";
    }
}

void optimal(int n){
    cout << endl;
    cout << "from optimal approach : ";
    int cnt = 0;
    for(int i=1; i<=sqrt(n); i++){
        if(n%i == 0){
            cnt++;
            if(i != (n/i)){
                cnt++;
            }
        }
    }
    if(cnt==2){
        cout << n << " is prime  number ";
    }else{
        cout << n << " is not a prime number ";
    }

}


int main(){
    int n;
    cout<<"Enter a number ";
    cin>>n;
    brute(n);
    optimal(n); 
    return 0;
}