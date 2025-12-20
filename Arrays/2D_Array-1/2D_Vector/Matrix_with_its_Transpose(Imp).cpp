/*
    Write a program to change the given matrix with its transpose. (LeetCode-867)
*/

#include<bits/stdc++.h>
using namespace std;

void display(vector<vector<int>>& v){
    int m = v.size();
    cout<<"Your Created Vector is: "<<endl;
    for(short i = 0; i<m; i++){
        for(short j = 0; j<m; j++){
            cout<<v[i][j]<<" ";
        }cout<<endl;
    } cout<<endl<<endl;
}

void showTranspose(vector<vector<int>>& v){
    int m = v.size();
    for(short i = 0; i<m; i++){
        for(short j = i+1; j<m; j++){  
            int temp = v[i][j];
            v[i][j] = v[j][i];
            v[j][i] = temp;
        }
    }

    cout<<"After transpose,the Vector is: "<<endl;
    for(short i = 0; i<m; i++){
        for(short j = 0; j<m; j++){
            cout<<v[i][j]<<" ";
        }cout<<endl;
    } cout<<endl<<endl;
}

vector<vector<int>> createVec(vector<vector<int>>& v, int m){
    cout<<"Your square size is ("<<m<<" * "<<m<<"): "<<m*m<<endl;

    cout<<"Enter your elements: "<<endl;
    for(short i = 0; i<m; i++){
        for(short j = 0; j<m; j++){
            cin>>v[i][j];
        }
    }cout<<endl<<endl;

    return v;
}

int main(){
    cout<<"This will be square matrix. so enter just row number! "<<endl;
    short x1;
    cout<<"Enter the row size: "; cin>>x1; cout<<endl;
    vector<vector<int>> arr(x1,vector<int> (x1)); 
    createVec(arr,x1);
    display(arr);
    showTranspose(arr);
}