/*
    Write a program to print the elements of both the diagonals in a square matrix
*/

#include<bits/stdc++.h>
using namespace std;

void displayMat(vector<vector<int>>& v){
    cout<<"the created matrix is: "<<endl;
    for(short i = 0; i<v.size(); i++){
        for(short j = 0; j<v[0].size(); j++){
            cout<<v[i][j]<<" ";
        }cout<<endl;
    }cout<<endl<<endl;
}

void diagonals(vector<vector<int>>& v){
    short n = v.size();
    cout<<"The diagonals of the matrix are: "<<endl;
    for(short i = 0; i<v.size(); i++){
        for(short j = 0; j<v[0].size(); j++){
            if((j==i) || (j+i==n-1)) cout<<v[i][j]<<" ";
            else cout<<"  ";
        }cout<<endl;
    }
}

void createMat(vector<vector<int>>& a, short x){
    cout<<"Enter the elements of your matrx: "<<endl;
    for(short i = 0; i<x; i++){
        for(short j = 0; j<x; j++) cin>>a[i][j]; 
    }cout<<endl<<endl;
}

int main (){
    /*
                    .-> primary diagonal  
                    . 
                    0 1 2 3 4
                0   *       * . .-> secondary diagonal
                1     *   *
                2       * 
                3     *   *
                4   *       *  

                for primary diagonal, i = j
                for secondary diagonal = i+j = n-1 (n+1 not, cause indeces start with 0)
    */


    int n; cout<<"Enter the size of the square matrix: "; cin>>n; cout<<endl;
    vector<vector<int>> x(n,vector<int>(n));
    createMat(x,n);
    displayMat(x);

    diagonals(x);
}
