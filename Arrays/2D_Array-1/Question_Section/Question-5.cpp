/*
    Write a program to add two matrices
*/

#include<bits/stdc++.h>
using namespace std;


int main(){
    // for addition/subtraction: both 2D_arrays size should be same
    

    int arr[3][2]={{2,4},{6,8},{0,1}};
    int brr[3][2]={{1,3},{5,7},{9,2}};

    cout<<"Your created first array :"<<endl;
    for(short i=0; i<3; i++){
        for(short j = 0; j<2; j++){
            cout<<arr[i][j]<<" ";
        } cout<<endl;
    }cout<<endl<<endl;


    cout<<"Your created second array :"<<endl;
    for(short i=0; i<3; i++){
        for(short j = 0; j<2; j++){
            cout<<brr[i][j]<<" ";
        } cout<<endl;
    }cout<<endl<<endl;


    cout<<"The sum of those two arrays: "<<endl;
    for(short i=0; i<3; i++){
        for(short j = 0; j<2; j++){
            cout<<(arr[i][j]+brr[i][j])<<"  ";
        } cout<<endl;
    }



}