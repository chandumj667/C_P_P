/*
    Multiplication of two matrices 
    Rule :  matrix1 = a*b
        `   matrix2 = c*d
            if(b==c) then we can do multiplication of two matrices 
                the resulting matrix is a*d
            if(b!=c) then we cannot able to multiply them

        multiply each element with each colum elements and sum up them 
        example : 
        m1 = [
                [a b c]
                [d e f]
                [h i j]
            ]
        m2 = [
                [A B C]
                [D E F]
                [H I J]
            ]
        
        m1*m2 = [
                    [(a*A + b*D + c*H)  (a*B + b*E + c*I)  (a*C + b*F + c*J)]
                    [(d*A + e*D + f*H)  (d*B + e*E + f*I)  (d*C + e*F + f*J)]
                    [(h*A + i*D + j*H)  (h*B + i*E + j*I)  (h*C + i*F + j*J)]
                ]
*/

#include<bits/stdc++.h>
using namespace std;
void print(vector<vector<int>>vec, int n, int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
}

void solve(vector<vector<int>>vec1, vector<vector<int>>vec2, int n, int m, int c, int d){
    vector<vector<int>>ans;
    for(int i=0; i<n; i++){
        vector<int>temp;
        for(int j=0; j<d; j++){
            int sum = 0;
            for(int k=0; k<m; k++){
                sum += vec1[i][k]*vec2[k][j];
            }
            temp.push_back(sum);
        }
        ans.push_back(temp);
    }
    cout<<"the result after the multiplication of the two matrices"<<endl;
    print(ans, n, d);
}

int main(){
    int n;
    int m;
    cout<<"\nEnter the row and col size of the matrix1 with space separated intergers ";
    cin>>n>>m;
    vector<vector<int>>vec1;
    cout<<"Enter the elements in to the matrix1 of size "<<n<<" rows and "<<m<<" columns"<<endl;
    for(int i=0; i<n; i++){
        vector<int>in;
        for(int j=0; j<m; j++){
            int ele;
            cin>>ele;
            in.push_back(ele);
        }
        vec1.push_back(in);
    }
    cout<<endl;
    int c;
    int d;
    cout<<"\nEnter the row and col size of the matrix2 with space separated intergers ";
    cin>>c>>d;
    vector<vector<int>>vec2;
    cout<<"Enter the elements in to the matrix2 of size "<<c<<" rows and "<<d<<" columns"<<endl;
    for(int i=0; i<c; i++){
        vector<int>in;
        for(int j=0; j<d; j++){
            int ele;
            cin>>ele;
            in.push_back(ele);
        }
        vec2.push_back(in);
    }
    if(m == c){
        solve(vec1, vec2, n, m, c, d);
    }
    else{
        cout<<"The dimensions are not matched correct it "<<endl;
    }
    return 0;
}