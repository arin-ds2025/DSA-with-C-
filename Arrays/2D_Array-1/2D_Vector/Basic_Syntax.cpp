#include<bits/stdc++.h>
using namespace std;

int main(){
    // int arr [][]; for 2D array
    // vector<vector<int>> v ( row, vector<int>(column) );  for 2D vector
    /*
        we can get the row size of vector : v.size();  v represents the vector
        we can get the column size of vector : v[0].size();  v represents the vector
        we can get the total size of vector : v.size() * v[0].size();  v represents the vector
    */


    vector<vector<int>> v; 
    v = {{1,2,3},{4,5,6},{1,3,5},{2,4,6}};

    for(short i = 0; i<4; i++){
        for(short j = 0; j<3; j++){
            cout<<v[i][j]<<" ";
        }cout<<endl;
    }cout<<endl;
    
    cout<<"The number of rows of this vector: "<<v.size()<<endl;
    cout<<"The number of columns of this vector: "<<v[0].size()<<endl;
    cout<<endl<<"So, the size of v is: "<<v.size()*v[0].size()<<endl;
}