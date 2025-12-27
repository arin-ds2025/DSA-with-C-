/*
    Given a positive integer n, generate a  n x n matrix filled with elements from 1 to n square(n^2)
    in spiral order . (LeetCode-59)
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

vector<vector<int>> spiralForm(int n){  // Changed to return filled matrix
    vector<vector<int>> a(n, vector<int>(n));
    short minR = 0, minC = 0;
    short maxR = n-1, maxC = n-1;
    int val = 1;  // Start filling from 1

    while(minR<=maxR && minC<=maxC){
        // Right
        for(short j = minC; j<=maxC; j++) a[minR][j] = val++; minR++;
        if(minR > maxR) break;

        // Down
        for(short i = minR; i<=maxR; i++) a[i][maxC] = val++; maxC--;
        if(minC > maxC) break;

        // Left
        for(short j = maxC; j>=minC; j--) a[maxR][j] = val++; maxR--;
        if(minR > maxR) break;

        // Up
        for(short i = maxR; i>=minR; i--) a[i][minC] = val++; minC++;
    }
    
    return a;
}

int main(){
    short n;
    cout<<"Enter the size of square matrix: "; cin>>n; cout<<endl;
    
    vector<vector<int>> v=spiralForm(n); 
    displayVec(v);
}