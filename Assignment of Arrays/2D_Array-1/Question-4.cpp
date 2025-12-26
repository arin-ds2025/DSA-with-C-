/*
    Write a program to print the row number having the maximum sum in a given matrix
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

void createMat(vector<vector<int>>& a, short x1, short x2){
    cout<<"Enter the elements of your matrx: "<<endl;
    for(short i = 0; i<x1; i++){
        for(short j = 0; j<x2; j++) cin>>a[i][j]; 
    }cout<<endl<<endl;
}

int main(){
    short m,n;
    cout<<"Enter the row number of the matrix: "; cin>>m; cout<<endl;
    cout<<"Enter the column number of the matrix: "; cin>>n; cout<<endl;

    vector<vector<int>> x(m, vector<int> (n));
    createMat(x,m,n);
    displayMat(x);

    short idx = -1,maxi = INT_MIN;
    for(short i = 0; i<m; i++){
        short sum = 0;
        for(short j = 0; j<n; j++){
            sum+=x[i][j];
        }
        if(maxi < sum || maxi == sum){ maxi = sum; idx = i;}
    }
    cout<<"The row, having the maximum sum is: "<<idx<<" and the sum is : "<<maxi<<endl;
}