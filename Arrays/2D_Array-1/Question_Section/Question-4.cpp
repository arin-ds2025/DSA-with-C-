/*
    Write a C++ program to find the sum of elements of a given 2D array of integers 
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[3][4] = {1,4,3,8,6,8,3,6,4,5,9,2};
    for(short i = 0; i<3; i++){
        for(short j = 0; j<4; j++){
            cout<<a[i][j]<<" ";
        }cout<<endl;
    }cout<<endl;

    short sum = 0;
    for(short i = 0; i<3; i++){
        for(short j = 0; j<4; j++){
            sum+=a[i][j];
        }
    }
    cout<<"The sum of the elements of that array is: "<<sum<<endl;
}