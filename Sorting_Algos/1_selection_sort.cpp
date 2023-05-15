/*
    selection sort
        the sorting technique that used nested loops and pointing a pointer on the starting element of the un-sorted array and traversing the remaining elements with another pointer then doing this operation iteratively we get the sorted array

        example:
        input : 15 90  3 76 42  7
                3  90 15 76 42  7
                3   7 15 76 42 90
                3   7 15 76 42 90
                3   7 15 42 76 90
        output: 3   7 15 42 76 90
*/


#include<bits/stdc++.h>
using namespace std;

void print(vector<int>vec, int n){
    for (int i = 0; i < n; i++){
        cout << vec[i] << " ";
    }
}

void selection_sort(vector<int>vec, int n){
    for (int i = 0; i<n-1; i++){
        for (int j = i + 1; j < n; j++){
            if(vec[j]<vec[i]){
                int temp = vec[i];
                vec[i] = vec[j];
                vec[j] = temp;
            }
        }
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
    // print(vec, n);
    selection_sort(vec, n);
    return 0;
}