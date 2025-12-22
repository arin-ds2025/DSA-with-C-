/*
    Write a program to print the matrix in wave form
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


void waveForm(vector<vector<int>>& a){
    short m = a.size(), n = a[0].size();
    vector<vector<int>> v(m,vector<int>(n));

    for(short i = 0; i<m; i++){
        if(i%2==0){
            for(short j = 0; j<n; j++){
              v[i][j] = a[i][j];
            }
        }else{
            for(short j = 0; j<n; j++){
                v[i][j] = a[i][n-1-j]; // row number should be as usual, just the column number store with reverse from in v matrix
            }
        }
    }

    cout<<"After wave form: "<<endl;
    displayVec(v);
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
    short m,n;

    cout<<"Enter the row size: "; cin>>m; cout<<endl;
    cout<<"Enter the column size: "; cin>>n; cout<<endl<<endl;

    vector<vector<int>> v(m,vector<int>(n));

    createVec(v,m,n);
    displayVec(v);

    waveForm(v);

}