/*
    sum upper triangle and lower triangle in a square matrix 
    diagonal divides the lower and upper triangles in a matrix

    example: 
            1 2 3 
            4 5 6
            7 8 9 
    upper triangle
            1 2 3
              5 6
                7
    it's sum is 1+2+3 + 5+6 + 7 = 24 
    lower triangle
            1
            4 5
            7 8 9
    it's sum is 1 + 4+5 + 7+8+9 = 34

    the logic is i loop starts from 0 to n
    the j loop has the logic 

    lower triangle 
        i =0; i<n; i++
            j =0; j<i; j++

    upper triangle
        i =0; i<n; i++
            j =m-1; j>=i; j--

    Time  complexity : O(N*M)
    space complexity : O(1)
*/

#include<bits/stdc++.h>
using namespace std;

void solve(vector<vector<int>>&vec, int n, int m){
    int lower_sum =0;
    int upper_sum =0;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            lower_sum += vec[i][j];
        }
        for(int j=m-1; j>=i; j--){
            upper_sum += vec[i][j];
        }
    }
    cout<<"Sum of Lower triangle elemets is "<<lower_sum<<endl;
    cout<<"Sum of Upper triangle elemets is "<<upper_sum<<endl;
    cout<<"Sum of Lower triangle elemets and Upper triangle elements is "<<(lower_sum + upper_sum)<<endl;


}

int main(){
    int n;
    int m;
    cout<<"\nEnter the row and col size of the matrix with space separated intergers ";
    cin>>n>>m;
    vector<vector<int>>vec;
    cout<<"Enter the elements in to the matrix of size "<<n<<" rows and "<<m<<" columns"<<endl;
    for(int i=0; i<n; i++){
        vector<int>in;
        for(int j=0; j<m; j++){
            int ele;
            cin>>ele;
            in.push_back(ele);
        }
        vec.push_back(in);
    }
    solve(vec, n, m);
    return 0;
}
