// in this program we learn about Datatypes in c++

#include<bits/stdc++.h>
using namespace std;

int main(){
    /*  there are several datatypes they are user datatypes and  primitive datatypes
    first we discuss about the primitive datatypes*/

    // integer datatype it contains three types [ (int), (long int or long), (long long int or long long) ]
    int num1 = 10;
    long  num2 = 1000000;
    long long num3 = 10000000000000;
    cout<<"int type : "<<num1<<endl
    <<"long integer :"<<num2<<endl <<"long long integer : "<<num3<<endl<<"------------------------------"<<endl;

    //  for the floating values or decimal values we have two datatypes they are [float and double]
    float num4 = 3.123;
    double num5 = 3.123456;
    cout<<"float type : "<<num4<<endl<<"double type : "<<num5<<" "<<endl<<"------------------------------"<<endl;

    // char and string, 
    // and also about getline which is used to take the entire line as an input
    char c = 'a';
    string name = "Hello Bro";
    string text_message;
    cout<<"char type: "<<c<<endl<<"string type: "<<name<<endl;
    cout<<"Enter the text message "<<endl;
    getline(cin, text_message);
    cout<<text_message<<endl;

}