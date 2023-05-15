// string is a type of array  but with character type array
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;

    getline(cin, s);
    for(int i=0;i<s.size(); i++){
        s[i] +=4;
        // we are moving each char of the string to four digits forward of the alphabetical order 
    }
    
    for(int i=0;i<s.size(); i++){
        cout<<s[i];
    }
    return 0;
}