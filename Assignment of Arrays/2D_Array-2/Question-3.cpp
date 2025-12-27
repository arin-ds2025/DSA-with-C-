/*
    Write a program to print the matrix in wave form. (Column wise)
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

void waveForm(vector<vector<int>>& h){
    short m = h.size(), n = h[0].size();
    for(short j = 0; j<n; j++){
        if(j%2==0){
            for(short i = m-1; i>=0; i--) cout<<h[i][j]; cout<<endl; 
        }else{
            for(short i = 0; i<m; i++) cout<<h[i][j]; cout<<endl;
        }
    }cout<<endl<<endl;
}

void createMat(vector<vector<int>>& a, short x1, short x2){
    cout<<"Enter the elements of your matrx: "<<endl;
    for(short i = 0; i<x1; i++){
        for(short j = 0; j<x2; j++) cin>>a[i][j]; 
    }cout<<endl<<endl;
}


int main(){
    int s1,s2; 
    cout<<"Enter the row size of the matrix: "; cin>>s1; cout<<endl;
    cout<<"Enter the column size of the matrix: "; cin>>s2; cout<<endl;
    vector<vector<int>> x(s1,vector<int>(s2));
    createMat(x,s1,s2);
    cout<<"After created,"<<endl;
    displayMat(x);

    waveForm(x);
}