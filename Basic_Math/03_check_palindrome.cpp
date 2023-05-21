/*
    Check if a number is Palindrome or Not
    Problem Statement:  Given a number check if it is a palindrome.

    An integer is considered a palindrome when it reads the same backward as forward.

    Examples:

    Example 1:
    Input: N = 123
    Output: Not Palindrome Number
    Explanation: 123 read backwards is 321.Since these are two different numbers 123 is not a palindrome.

    Example 2:
    Input: N =  121 
    Output: Palindrome Number
    Explanation: 121 read backwards as 121.Since these are two same numbers 121 is a palindrome.

    brute_force: 
        using division and modulus operator reverse the number and compare it with the original number if both are equal then the number is a palindrome
        Time Complexity : O(N)
        space Complexity : O(1) -->auxilary space

    optimal :
        convert in to string and using two pointer 
        time complexity : O(log N)
        space complexity : O(1) ==> O(N) -->auxilary space
*/


#include<bits/stdc++.h>
using namespace std;

void brute(int num){
    int temp = num;
    int reverse = 0;
    while(temp){
        int rem = temp % 10;
        reverse *= 10;
        reverse += rem;
        temp /= 10;
    }
    if(reverse == num){
        cout << " The Number is PALINDROME ";
    }else{
        cout << "  The Number is not a PALINDROME ";
    }
}

void optimal(int num){
    string s = to_string(num);
    int l =0;
    int h = s.length() - 1;
    bool flag = 1;
    while(l<=h){
        if(s[l] != s[h]){
            flag = 0;
            break;
        }else{
            flag = 1;
        }
        l++;
        h--;
    }
    if(flag == 0){
            cout << " The Number is not a PALINDROME ";
    }else{
            cout << " The Number is a PALINDROME ";
    }
}

int main(){
    int num;
    cout<<"Enter a number ";
    cin >> num;
    cout << "Brute Force : ";
    brute(num);
    cout << endl;
    cout << "Optimal : " ;
    optimal(num);
    return 0;
}