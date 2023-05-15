//array is a user defined datatype also know as a data structure
// it holds the same type of data as container

#include<bits/stdc++.h>
using namespace std;
int main(){
//     int array[] = {1, 2, 3, 4, 5};
//     char arr[] = {'a', 'b', 'c'};
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    int sum =0;
    cout<<"\nEnter "<<n<<" element in to the array "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        sum += arr[i];
    }
    cout<<"summation of all the element is "<<sum<<endl;
    //we can get the elements at a specific index also
    cout<<"the element at index 4 is "<<arr[4];


    cout<<"\n---------------------------------------------------"<<endl;
    cout<<"2d array or multi-dimensional arrays"<<endl;
    int Md_arr[4][2] = {{1,2}, {2,3}, {3,4}, {4,5}};
    cout<<Md_arr[1][1]<<endl;

    int a, b;
    cin>>a>>b;
    int Arr[a][b];
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            cin>>Arr[i][j];
        }
    }

    for(int i=0; i<a; i++){
        cout<<"[ ";
        for(int j=0; j<b; j++){
            cout<<Arr[i][j]<<" ";
        }cout<<" ]"<<endl;
    }
    return 0;
}