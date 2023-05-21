/*
    Reverse a number in C
    Problem Statement: Given a number N reverse the number and print it.

    Examples:

    Example 1:
    Input: N = 123
    Output: 321
    Explanation: The reverse of 123 is 321

    Example 2:
    Input: N = 234
    Output: 432
    Explanation: The reverse of 234 is 432


    Brute_force :
        Convert the number in to the string and reverse it
        time complexity : O(N)
        space complexity: O(1); -->if we return as number
        -->
        using two pointers on the string and swapping the two value then we get the reversed number
        time complexity : O(log N)
        space complexity: O(1); -->if we return as number

    Optimal :
        use the division and modulus operator and store the digits with multiplication of previous and store in a temp variable then return it
        Time complexity : O(N)
        space complexity : O(1)
    
*/

#include<bits/stdc++.h>
using namespace std;

int brute_force(long long num){
    string s = to_string(num);
    reverse(s.begin(), s.end());
    return stoi(s);
}


int brute_force_2(long long num){
    string s = to_string(num);
    int l =0;
    int h =s.length()-1;
    while(l<=h){
        swap(s[l], s[h]);
        l++;
        h--;
        
    }
    return stoi(s);
}

int Optimal(long long num){
    int reverse = 0;
    while(num){
        int rem = num % 10;
        reverse *= 10;
        reverse += rem;
        num /= 10;
    }
    return reverse;
}

int main(){
    long long num;
    cout << "Enter a number ";
    cin>>num;
    cout << "Using Brute force approach " << brute_force(num) << endl;
    cout << "Using Brute force 2nd approach " << brute_force_2(num) << endl;
    cout << "Using Optimal approach " << Optimal(num) << endl;
    return 0;
}