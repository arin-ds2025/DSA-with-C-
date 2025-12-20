/*
    Write a C++ program to find the largest element of a given 2D array of integers 
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[4][2] = {1,9,4,5,7,8,3,2};

    cout<<"The array is: "<<endl;
    for(short i = 0; i<4; i++){
        for(short j = 0; j<2; j++){
            cout<<a[i][j]<<" ";
        }cout<<endl;
    }cout<<endl;

    short max = 0;
    for(short i = 0; i<4; i++){
        for(short j = 0; j<2; j++){
            if(a[i][j]>max) max = a[i][j];
        }
    }
    cout<<"The largest element from that 2D array is: "<<max<<endl;
}