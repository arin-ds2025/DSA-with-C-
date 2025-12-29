#include<bits/stdc++.h>
using namespace std;
int main(){
    // in 2D arrays every row and every column has the same size according their row and column size..
    //example:
    int arr[3][2] = {{1,2},{3,4},{5,6}};

    cout<<"The array is: "<<endl;
    for(short i = 0; i<3; i++){
        for(short j = 0; j<2; j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }cout<<endl<<endl;


    
    // but in 2D vector we can change the size of each row. example:
    vector< vector<int> > v = {{1,2,3},{1,3,5,7,9},{2,4,6,8,10,12}}; // each row has different size of columns

    cout<<"The vector is: "<<endl;
    for(short i = 0; i<v.size(); i++){
        for(short j = 0; j<v[i].size(); j++){ // each row's column has different size, so we can't use v[0].size() .. it will print elements according to the first column size
            cout<<v[i][j]<<" ";
        }cout<<endl;
    }cout<<endl<<endl;

    // we can use push_back function to insert a whole vector inside the 2D vector, as a new row at last
    // if we user pop_back function in 2D vector, then the last row of the 2D vector which is also a vector, that will be removed
}