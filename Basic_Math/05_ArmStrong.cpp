/*
    Check if a number is Armstrong Number or not
    Problem Statement: Given a number, check if it is Armstrong Number or Not.

    Examples:

    Example 1:
    Input:153
    Output: Yes, it is an Armstrong Number
    Explanation: 1^3 + 5^3 + 3^3 = 153

    Input:170
    Output: No, it is not an Armstrong Number
    Explanation: 1^3 + 7^3 + 0^3 != 170
    What are Armstrong Numbers?

    Armstrong Numbers are the numbers having the sum of digits raised to power no. of digits is equal to a given number. Examples- 0, 1, 153, 370, 371, 407, and 1634 are some of the Armstrong Numbers.

    Armstrong Number : 153 ==> total digit is 3
                    digit ^total digits
                    1^3 + 5^3 + 3^3
                    1   + 125+  27
                    153 ==> it is equal to original number

                    : 1634 ==> d = 4
                    1^4 + 6^4 + 3^4 + 4^4
                    1   +1296 + 81  + 256
                    1634

    Approach :
        count the number of digits and make it as a power variable
        then make each digit pow(digit, count) sum up all digits as like this then check the total sum with original  number if it is equal then the number is armstrong number else it is not an armstrong number
        Time Complexity: O(N);
        Space Complexity : O(1);
*/


#include<bits/stdc++.h>
using namespace std;

bool solve(int n){
    int temp = n;
    int count = 0;
    while(temp){
        count++;
        temp /= 10;
    }
    int sum = 0;
    int temp2 = n;
    while(temp2!=0){
        int rem = temp2 % 10;
        sum += pow(rem, count);
        temp2 /= 10;
    }
    return (n == sum);
}

int main(){
    int n;
    cout << "Enter a number ";
    cin>>n;
    if(solve(n)){
        cout << n << " is an Armstrong number " << endl;
    }else{
        cout << n << " is not an Armstrong number " << endl;
    }
    return 0;
}