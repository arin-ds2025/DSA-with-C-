/*
    Write a program to print the transpose of the matrix entered by the user and store it
    in a new matrix
*/

#include<bits/stdc++.h>
using namespace std;


int main(){
    int n, m;
    cout<<"Enter the row size: "; cin>>m; cout<<endl;
    cout<<"Enter the column size: "; cin>>n; cout<<endl;
    int arr[m][n];
    cout<<"Enter your 2D_Array elements: "<<endl;
    for(short i = 0; i<m; i++){
        for(short j = 0; j<n; j++){
            cin>>arr[i][j];
        }
    }cout<<endl<<endl;

    // storing the transpose matrix in a new matrix  
    int brr[n][m];
    for(short i = 0; i<n; i++){
        for(short j = 0; j<m; j++){
            brr[i][j]=arr[j][i];
        }cout<<endl;
    }

    cout<<"The transpose form of your created array is: "<<endl;
    for(short i = 0; i<n; i++){
        for(short j = 0; j<m; j++){
            cout<<brr[i][j]<<" ";
        }cout<<endl;
    }
}