/*
    Given a matrix 'A' of dimension n x m and 2 coordinates (l1,r1) and (l2,r2). Return the sum of
    the rectangle from (l1,r1) to (l2,r2). 
*/

#include<bits/stdc++.h>
using namespace std;

void displayMat(vector<vector<int>>& v){
    cout<<"matrix is: "<<endl;
    for(short i = 0; i<v.size(); i++){
        for(short j = 0; j<v[0].size(); j++){
            cout<<v[i][j]<<" ";
        }cout<<endl;
    }cout<<endl<<endl;
}

void sumOfRec(vector<vector<int>>& v, short l1, short l2, short r1, short r2 ){
    short sum = 0;

    cout<<"The rectangle is: "<<endl;
    for(short i = min(l1,l2); i<=max(l2,l1); i++){
        for(short j = min(r1,r2); j<=max(r2,r1); j++){
            cout<<v[i][j]<<" ";
            sum+=v[i][j];
        }cout<<endl;
    }cout<<endl;
    cout<<"The sum of the rectangle is: "<<sum<<endl<<endl;
}

void createMat(vector<vector<int>>& a, short x1, short x2){
    cout<<"Enter the elements of your matrx: "<<endl;
    for(short i = 0; i<x1; i++){
        for(short j = 0; j<x2; j++) cin>>a[i][j]; 
    }cout<<endl<<endl;
}

int main(){
    short n,m;
    cout<<"Enter the row number of the matrix: "; cin>>n; cout<<endl;
    cout<<"Enter the column number of the matrix: "; cin>>m; cout<<endl;
    vector<vector<int>> x(n,vector<int>(m));
    createMat(x,n,m);
    displayMat(x);

    short l1,r1, l2,r2;
    cout<<"Enter your first coordinates of the matrix: "; cin>>l1>>r1; cout<<endl;
    cout<<"Enter the second coordinates of the matrix: "; cin>>l2>>r2; cout<<endl;
    
    sumOfRec(x,l1,l2,r1,r2);
}


