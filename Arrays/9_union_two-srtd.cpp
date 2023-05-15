/*
    union of two sorted arrays
    the elements present in both the arrays merging them in to a single array with non repeating the values

    brute force : using set (not unordered set) as a resulted array 
    time complexity : O(nlogn)+O(nlogn)+O(n+m)
    space complexity : O(n+m)

    optimal : using two pointers as they are sorted arrays
        traverse the arrays by keeping two pointers (i and j) one on each. 
        if i < j and i not in union array then push the i value in to the union array and increment i++. 
        if i > j and j not in union array then push the j value in to the union array and increment j++
        if i == j then increment i++

        at last one of the array traversed completely and then traverse the another array for distinct elements to insert in to the union array

        time complexity : O(n+m)
        space complexity : O(n+m)
*/

#include<bits/stdc++.h>
using namespace std;

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void optimal(int arr1[], int arr2[], int n, int m){
    vector<int>uni;
    int i=0; 
    int j=0;
    while(i<n && j<m){
        if(arr1[i] <= arr2[j]){
            if(uni.size() == 0 || uni.back() != arr1[i]){
                uni.push_back(arr1[i]);
            }
            i++;
        }
        else{
            if(uni.size() == 0 || uni.back() != arr2[j]){
                uni.push_back(arr2[j]);
            }
            j++;
        }
    }
    while(i<n){
        if(uni.size() == 0 || uni.back() != arr1[i]){
            uni.push_back(arr1[i]);
        }
        i++;
    }
    while(j<m){
        if(uni.size() == 0 || uni.back() != arr2[j]){
            uni.push_back(arr2[j]);
        }
        j++;
    }
    cout<<"\nfrom optimal "<<endl;
    for(int i=0; i<uni.size(); i++){
        cout<<uni[i]<<" "; 
    }
}

void brute_force(int arr1[], int arr2[], int n, int m){
    set<int>s;
    for(int i=0; i<n; i++){
        s.insert(arr1[i]);
    }
    for(int i=0; i<m; i++){
        s.insert(arr2[i]);
    }
    int arr[s.size()];
    int k =0;
    for(auto it : s){
        arr[k++] = it;
    }
    cout<<"From brute force"<<endl;
    print(arr, k);

}


int main(){
    int n;
    cout<<"Enter the size of the first array"<<endl;
    cin>>n;
    int arr1[n];
    cout<<"Enter "<<n<<" elements in to the array-1"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }

    int m;
    cout<<"Enter the size of the Second array"<<endl;
    cin>>m;
    int arr2[m];
    cout<<"Enter "<<m<<" elements in to the array-2"<<endl;
    for(int i=0; i<m; i++){
        cin>>arr2[i];
    }
    brute_force(arr1, arr2, n, m);
    optimal(arr1, arr2, n, m);
    return 0;
}