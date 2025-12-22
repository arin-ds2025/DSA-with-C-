/*
    Write a program to print the multiplication of two matrices given by the user. 
*/

#include<bits/stdc++.h>
using namespace std;

void displayVec(vector<vector<int>> v){
    cout<<"The matrix is: "<<endl;
    for(short i = 0; i<v.size(); i++){
        for(short j = 0; j<v[0].size(); j++){
            cout<<v[i][j]<<" ";
        }cout<<endl;
    }cout<<endl<<endl;
}


void mtxMul(vector<vector<int>>& v1, vector<vector<int>>& v2){
    short a = v1.size(), b = v2[0].size();
    short t = v2.size(); // we can also use v1[0].size(); cause both are same

    vector<vector<int>> res(a,vector<int>(b));

    for(short i = 0; i<a; i++){
        for(short j = 0; j<b; j++){
            res[i][j] = 0;
            for(short k = 0; k<t; k++){
                res[i][j] += v1[i][k] * v2[k][j]; // here for v1, i is constant and for v2, j is constant for each multiplication 
            }
        }
    }
    
    cout<<"After multiplication :"<<endl;
    displayVec(res);
}


void createVec(vector<vector<int>>& v, short a, short b){
    cout<<"Enter the elements : "<<endl;
    for(short i = 0; i<a; i++){
        for(short j = 0; j<b; j++){
            cin>>v[i][j];
        }
    } cout<<endl<<endl;
}

int main(){
    short m,n,p,q;

    cout<<"Enter the first 2D_vector's row size: "; cin>>m; cout<<endl;
    cout<<"Enter the first 2D_vector's column size: "; cin>>n; cout<<endl<<endl;
    vector<vector<int>> v1(m,vector<int>(n));
    createVec(v1,m,n);
    displayVec(v1);

    cout<<"Enter the second 2D_vector's row size: "; cin>>p; cout<<endl;
    cout<<"Enter the second 2D_vector's column size: "; cin>>q; cout<<endl<<endl;
    vector<vector<int>> v2(p,vector<int>(q));
    createVec(v2,p,q);
    displayVec(v2);

    if(n==p){
        mtxMul(v1,v2);
    }else{
        cout<<"The matrices can't be multiplied..!"<<endl;
    }


}