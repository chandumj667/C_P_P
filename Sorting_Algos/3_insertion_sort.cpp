/*
    Insertion sort
    using this sorting technique we sort the array in ascending order
    it follows as basically array divides in to two parts as sorted and unsorted part
    take the element in the unsorted array and place it in the correct place of the sorted array

    example: 
        input:  91 2 43 5 66
                2 91 43 5 66
                2 43 91 5 66
                2 5 43 91 66
                2 5 43 66 91
        output: 2 5 43 66 91
*/

#include<bits/stdc++.h>
using namespace std;

void print(vector<int>vec, int n){
    for (int i = 0; i < n; i++){
        cout << vec[i] << " ";
    }
}

void insertion_sort(vector<int>vec, int n){
    
    for (int i = 1; i<n; i++){
        int cur = vec[i];
        int j = i - 1;
        while(vec[j]>cur && j>=0){
            vec[j + 1] = vec[j];
            j--;
        }
        vec[j + 1] = cur;
    }
    print(vec, n);
}

int main(){
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n;i++){
        cin >> vec[i];
    }
    insertion_sort(vec, n);

    return 0;

}