/*
    Print all Divisors of a given Number
    Problem Statement: Given a number, print all the divisors of the number. A divisor is a number that gives remainder as zero when divided.

    Examples:

    Example 1:
    Input: n = 36
    Output: 1 2 3 4 6 9 12 18 36
    Explanation: All the divisors of 36 are printed.

    Example 2:
    Input: n = 97
    Output: 1 97
    Explanation: Since 97 is a prime number, only 1 and 97 are printed.

    Brute Force : 
        Traversing from 1 to n by checking with all the i values and return them 
        Time Complexity : O(N)
        Space Complexity : O(1)

    Optimal :
        we know that if i is divides by n then i/n is also divides n 
        in this case we dont need to traverse till n we just need to traverse up to sqrt(n)

        Time Complexity : O(sqrt(n))
        Space Complexity : O(1)
*/


#include<bits/stdc++.h>
using namespace std;

void brute(int n){
    cout << "\nfrom brute force approach : ";
    for (int i = 1; i <= n; i++)
    {
        if(n%i == 0)
            cout << i<<" ";
    }
    cout << endl;
}

void optimal(int n){
    cout << "from optimal approach     : ";
    for (int i = 1; i <= sqrt(n); i++){
        if(n%i == 0){
            cout << i << " ";
            if(i != n/i)
                cout << n/i << " ";
        }
    }
}

int main(){
    int n;
    cout << "Enter a number ";
    cin >> n;
    brute(n);
    optimal(n);
    return 0;

}