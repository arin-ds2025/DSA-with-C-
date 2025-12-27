/*
    Given a positive integer n, generate a  n x n matrix filled with elements from 1 to n square(n^2)
    in spiral order . (LeetCode-59)
*/

#include<bits/stdc++.h>
using namespace std;

void displayMat(vector<vector<int>>& v){
    short n = v.size();
    cout<<"The spiral matrix is: "<<endl;
    for(short i = 0; i<n; i++){
        for(short j = 0; j<n; j++){
            cout<<v[i][j]<<" ";
        }cout<<endl;
    }cout<<endl<<endl;
}

void spiralForm(short n){
    vector<vector<int>> h(n,vector<int>(n,0));
    short lyr = 0, k = 1;
    
    while(k <= n*n){
        // Top row: left to right
        for(short j = lyr; j < n-lyr; j++){
            h[lyr][j] = k++;
        }
        
        // Right column: top+1 to bottom
        for(short i = lyr+1; i < n-lyr; i++){
            h[i][n-1-lyr] = k++;
        }
        
        // Bottom row: right-1 to left (only if rows remain)
        if(n-2*lyr > 1){  // more than one row in this layer
            for(short j = n-lyr-2; j >= lyr; j--){
                h[n-1-lyr][j] = k++;
            }
        }
        
        // Left column: bottom-1 to top+1 (only if columns remain)
        if(n-2*lyr > 1){  // more than one column in this layer
            for(short i = n-lyr-2; i>lyr; i--){
                h[i][lyr] = k++;
            }
        }
        
        lyr++;  // move to next inner layer
    }

    // printing the spiral matrix
    displayMat(h);
    
}


int main(){
    int s; 
    cout<<"Enter the size of the square matrix: "; cin>>s; cout<<endl;

    spiralForm(s);
}