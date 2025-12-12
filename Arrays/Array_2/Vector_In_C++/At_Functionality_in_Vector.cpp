#include<bits/stdc++.h>
using namespace std;

int main(){
    // we can do indexing through at() instead of using []
    // syntax: vector_name.at(index_num);

    // with gievn capacity
    vector<int> v1(4); // by default in each index of the capacity the value initialized with 0, so we can direct update the elements or values
    v1.at(0) = 2; // or v1[0] = 2;
    v1.at(1) = 5; // or v1[1] = 5;
    v1.at(2) = 8; // or v1[2] = 8;
    v1.at(3) = 0; // or v1[3] = 0;
    for(short i = 0; i<v1.size(); i++) cout<<v1.at(i)<<" "; cout<<endl<<endl;

    // without given capacity
    vector<int> v2;
    for(short i = 2; i<13; i++) { if(i%2==0) v2.push_back(i); }
    for(short i = 0; i<v2.size(); i++) cout<<v2.at(i)<<" "; // or cout<<v2[i]<<" ";
    cout<<endl<<endl; 
}