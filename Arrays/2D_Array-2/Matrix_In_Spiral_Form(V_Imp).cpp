/*
    Write a program to print the matrix in spiral form. (LeetCode-54)
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


void spiralForm(vector<vector<int>>& a){
    short minR = 0, minC = 0;
    short maxR = a.size()-1 , maxC = a[0].size()-1;

    cout<<"After spiral operation: "<<endl;
    while(minR<=maxR && minC<=maxC){
        // for right
        for(short j = minC; j<=maxC; j++) cout<<a[minR][j]<<" ";  minR++;
        if(minR>maxR || minC>maxC) break;

        // for down
        for(short i = minR; i<=maxR; i++) cout<<a[i][maxC]<<" ";  maxC--;
        if(minR>maxR || minC>maxC) break;

        // for left
        for(short j = maxC; j>=minC; j--) cout<<a[maxR][j]<<" ";  maxR--;
        if(minR>maxR || minC>maxC) break;

        // for up / top
        for(short i = maxR; i>=minR; i--) cout<<a[i][minC]<<" ";  minC++;
    }
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

    spiralForm(v);    

}