/*
    Bubble sort:
    this is the sorting that follows repeatedly swap the two adjacent elements if they are in wrong order and finally the entire array getting sorted

    example: 
    input : 9 3 5 12 1
        
        1st 3 9 
            3 5 9 
            3 5 9 12
            3 5 9 1 12
        
        2nd 3 5 9
            3 5 1 9 12
            3 5 1 9 12
        3rd 3 1 5 9 12

        4th 1 3 5 9 12

    output: 1 3 5 9 12
*/

#include<bits/stdc++.h>
using namespace std;

void print(vector<int>vec, int n){
    for (int i = 0; i < n; i++){
        cout << vec[i]<<" ";
    }
}

void bubble_sort(vector<int>vec, int n){
    int count = 1;
    while(count<n){
        for (int i = 0; i<n-count; i++){
            if(vec[i]>vec[i+1]){
                swap(vec[i], vec[i + 1]);
            }
        }
        count++;
    }
    print(vec, n);
}

int main(){
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++){
        cin >> vec[i];
    }
    bubble_sort(vec, n);
    return 0;
}