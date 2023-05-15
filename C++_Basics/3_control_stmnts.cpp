//control statement if, else, else if, switch case statements.
#include<bits/stdc++.h>
using namespace std;

int main(){
    // if else statements are used to choose between the multiple options and either one case possible situations 
    // if we have more if, else if, else, situations we better choose switch case 
    // let us play a game whether the age is sufficient for vote or not
    int age;
    cout<<"Enter Your age :"; 
    cin>>age;
    if(age<18){
        cout<<"your age is "<<age<<" years which is less than the required criteria wait for "<<18-age<<" Years to get the vote"<<endl;
    }
    else if(age>50){
        cout<<"your age is "<<age<<" years which is greater than the required criteria"<<endl;
    }
    else{
        cout<<"your age is "<<age<<" years, it is perfect age to get the vote"<<endl;
    }

    int number;
    cout<<"Enter the number respected to the color<"<<endl<<"1 blue"<<endl<<"2 red"<<endl<<"3 green"<<endl<<"4 violet"<<endl<<"5 black"<<endl;
    cin>>number;
    switch(number){
        case 1:
            cout<<"the number is "<<number<<" and you choose blue color"<<endl;
            break;
        case 2:
            cout<<"the number is "<<number<<" and you choose red color"<<endl;
            break;
        case 3:
            cout<<"the number is "<<number<<" and you choose green color"<<endl;
            break;
        case 4:
            cout<<"the number is "<<number<<" and you choose violet color"<<endl;
            break;
        case 5:
            cout<<"the number is "<<number<<" and you choose black color"<<endl;
            break;
    }
    return 0;
}