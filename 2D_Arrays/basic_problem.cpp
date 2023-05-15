#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int l =0;
    int h = s.size()-1;
    int sum =0;
    while(l<=h){
        if(l==h){
            sum+=s[l]-'0';
            break;
        }
        int a = s[l]-'0';
        int b = s[h]-'0';
        int c = a*10 + b;
        sum += c;
        l++;
        h--;
    }
    cout<<sum;
    return 0;
}