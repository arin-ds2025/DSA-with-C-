/*
    Write a program to displays the elements of middle row and the elements of middile column of a 
    2D array.
    [Assuming the 2D array to be a square matrix with odd dimention . i.e. 3x3, 5x5, 7x7 etc..]
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


void middleRC(vector<vector<int>>& v){
    short x1 = v.size(), x2 = v[0].size();
    cout<<"The middle row and column of the matrix is: "<<endl;
    for(short i = 0; i<x1; i++){
        for(short j = 0; j<x2; j++){
            if(i==x1/2 or j==x2/2) cout<<v[i][j]<<" ";
            else cout<<"  ";
        }cout<<endl;
    }
}

void createMat(vector<vector<int>>& a, short x){
    cout<<"Enter the elements of your matrx: "<<endl;
    for(short i = 0; i<x; i++){
        for(short j = 0; j<x; j++) cin>>a[i][j]; 
    }cout<<endl<<endl;
}


int main(){
    short n;
    cout<<"Enter the odd size of the matrix: "; cin>>n; cout<<endl;

    vector<vector<int>> x(n,vector<int>(n));
    createMat(x,n);
    displayMat(x);

    if(n%2!=0) middleRC(x);
    else cout<<"Sorry, middle row and column can't be printed. enter odd size of the matrix"<<endl;
}