/*
    Given an integer 'numRows', generate Pascal's triangle  (LeetCode-118) 
*/

#include<bits/stdc++.h>
using namespace std;

vector< vector<int> > pascal(short r){

    vector< vector<int> > v;

    // create 2D vector's column size with new vector
    // for(short i = 0; i<r; i++){
    //     vector<int> a(i+1); // we are creating new fector for each i
    //     v.push_back(a); // we are increasing the column size according to the a vector size for each i
    // }


    // generate  .. we can push new column's size of vector in 2D vector directly
    for(short i = 0; i<r; i++){
        vector<int> a(i+1);
        v.push_back(a);

        for(short j = 0; j<=i; j++){
            if(j==0 || j==i) v[i][j] = 1;
            else v[i][j] = v[i-1][j] + v[i-1][j-1];
        }
    }

    return v;
}

int main(){
    short r; cout<<"Enter the numrows: "; cin>>r; cout<<endl;
    vector< vector<int> > x = pascal(r);    

    // print 
    for(short i = 0; i<x.size(); i++){
        for(short j = 0; j<x[i].size(); j++){
            cout<<x[i][j]<<" ";
        }cout<<endl;
    }

}