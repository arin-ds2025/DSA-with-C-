/*
    Write a program to store 10 at every index of a 2D matrix with 5 rows and 5 columns 
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5][5];

    for(short i = 0; i<5; i++){
        for(short j = 0; j<5; j++) arr[i][j] = 10;
    }cout<<endl<<endl;

    cout<<"Your created array is: "<<endl;
    for(short i = 0; i<5; i++){
        for(short j = 0; j<5; j++) cout<<arr[i][j]<<" "; cout<<endl;
    }cout<<endl<<endl;
}