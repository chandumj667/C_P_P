/*
    Find GCD of two numbers
    Problem Statement: Find gcd of two numbers.

    Examples:

    Example 1:
    Input: num1 = 4, num2 = 8
    Output: 4
    Explanation: Since 4 is the greatest number which divides both num1 and num2.

    Example 2:
    Input: num1 = 3, num2 = 6
    Output: 3
    Explanation: Since 3 is the greatest number which divides both num1 and num2.

    Brute Force:
        Traverse from 1 to min(a, b) and check if i is divisible by both a and b if so then store in a variable and repeat this process and get the max of it (i)
        then the number is the gcd of a, b
        Time complexity: O(N)
        space complexity: O(1)
    Optimal:
        using Euclidean’s theorem by recursively until the b==0
        gcd(a, b) = gcd(b, a%b);
        Time Complexity : O(Log min(a, b));
        Space Complexity : O(1);
*/

#include<bits/stdc++.h>
using namespace std;

int brute(int a, int b){
    int maxi = INT_MIN;
    for (int i = 1; i<=min(a, b); i++){
        if((a%i ==0) && (b%i ==0))
            maxi = max(maxi, i);
    }
    return maxi;
}


int optimal(int a, int b){
    if(b==0)
        return a;
    return optimal(b, a % b);
}

int main(){
    int a, b;
    cout << "Enter two Numbers ";
    cin >> a >> b;
    cout << "Using brute  the GCD of " << a << " and " << b << " is : " << brute(a, b) << endl;
    cout<<"Using optimal  the GCD of "<<a<<" and "<<b<<" is : "<<optimal(a, b);
    return 0;
}