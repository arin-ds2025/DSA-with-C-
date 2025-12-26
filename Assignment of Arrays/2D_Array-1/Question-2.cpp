/*
    Write a program to add two matrices and save the result in one of the given matrices 
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

void add2Mat(vector<vector<int>>& v1, vector<vector<int>>& v2){
    short x1 = v1.size(), x2 = v2[0].size(); // cause both matrices have same size
    for(short i = 0; i<x1; i++){
        for(short j = 0; j<x2; j++) v1[i][j]+=v2[i][j];
    }

    cout<<"After additon,"<<endl;
    displayMat(v1);
}

void createMat(vector<vector<int>>& a, short x1, short x2){
    cout<<"Enter the elements of your matrx: "<<endl;
    for(short i = 0; i<x1; i++){
        for(short j = 0; j<x2; j++) cin>>a[i][j]; 
    }cout<<endl<<endl;
}

int main(){
    short x1,x2;
    cout<<"Enter the row size of both matrices: "; cin>>x1; cout<<endl;
    cout<<"Enter the column size of both matrices: "; cin>>x2; cout<<endl;
    
    vector<vector<int>> g(x1,vector<int>(x2));
    createMat(g,x1,x2);
    cout<<"After created first matrix,"<<endl;
    displayMat(g);

    vector<vector<int>> k(x1,vector<int>(x2));
    createMat(k,x1,x2);
    cout<<"After created first matrix,"<<endl;
    displayMat(k);
    cout<<endl;

    add2Mat(g,k);
}