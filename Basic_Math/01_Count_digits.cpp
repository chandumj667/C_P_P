/*
    Count digits in a number
    Problem Statement: Given an integer N , write program to count number of digits in N.

    Examples:

    Example 1:
    Input: N = 12345
    Output: 5
    Explanation: N has 5 digits

    Example 2:
    Input: N = 8394
    Output: 4
    Explanation: N has 4 digits


    brute force:
        traverse the array and using division and Modulus operators we get the count of the digits in a given number
        Time Complexity : O(N)
        Space Complexity : O(1)

    Optimal :
        convert the number in to a string and find the length of the string and the length is the count of digits in the number
        Time Complexity : O(1)
        Space Complexity: O(1)
    Better :
        using log with base 10 we get a value which is 1 less the count of the  digits to count of the digits it lies between the range
        so take the floor value of this and add 1 to the value to get the count of the digits in the number
        count-1 < log10(num) <count
        floor(log10(num)+1);
*/

#include<bits/stdc++.h>
using namespace std;

int brute(long long num){
    int count =0;
    while(num){
        count++;
        num /= 10;
    }
    return count;
}

int optimal(long long num){
    string s = to_string(num);
    return s.length();
}

int better(long long num){
    return (floor(log10(num)) + 1);
}


int main(){
    long long num;
    cout << "Enter a number ";
    cin >> num;
    cout << "Using Brute force approach " << brute(num)<<endl;
    cout << "Using Optimal approach " << optimal(num)<<endl;
    cout << "Using Better approach " << better(num)<<endl;
    return 0;
}