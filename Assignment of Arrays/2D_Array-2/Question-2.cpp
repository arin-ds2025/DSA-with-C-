/*
    Write a program to rotate the matrix by 90 degrees anti-clockwise  
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

void rotateAntiClock(vector<vector<int>>& v){
    short n = v.size(); // row size = column size
    // transpose first
    for(short i = 0; i<n; i++){
        for(short j = i+1; j<n; j++){
            short temp = v[i][j];
            v[i][j] = v[j][i];
            v[j][i] = temp;
        }
    }

    // now anti-clock wise rotation (reverse the columns)
    for(short j = 0; j<n; j++){
        for(short i = 0; i<n/2; i++){
            swap(v[i][j],v[n-1-i][j]);
        }
    }

    cout<<"After rotation,the matrix is: "<<endl;
    for(short i = 0; i<n; i++){
        for(short j = 0; j<n; j++){
            cout<<v[i][j]<<" ";
        }cout<<endl;
    } cout<<endl<<endl;
}

void createMat(vector<vector<int>>& a, short x){
    cout<<"Enter the elements of your matrx: "<<endl;
    for(short i = 0; i<x; i++){
        for(short j = 0; j<x; j++) cin>>a[i][j]; 
    }cout<<endl<<endl;
}

int main(){
    int s; 
    cout<<"Enter the size of the square matrix: "; cin>>s; cout<<endl;
    vector<vector<int>> x(s,vector<int>(s));
    createMat(x,s);
    cout<<"After created,"<<endl;
    displayMat(x);

    rotateAntiClock(x);
}