/*
    Write a C++ program to find the second minimum element of a given 2D array of integers 
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[3][4] = {19,11,8,4,10,9,5,6,3,2,7,-3};

    cout<<"The elements of array is: "<<endl;
    for(short i = 0; i<3; i++){
        for(short j = 0; j<4; j++){
            cout<<" "<<a[i][j];
        }cout<<endl;
    }

    int min = INT_MAX, smin = INT_MAX;
    for(short i = 0; i<3; i++){
        for(short j = 0; j<4; j++){
            if(a[i][j]<min){
                smin = min;
                min = a[i][j];
            }
        }
    }
    cout<<"The second minimum value of that 2D array is: "<<smin<<endl; 
}