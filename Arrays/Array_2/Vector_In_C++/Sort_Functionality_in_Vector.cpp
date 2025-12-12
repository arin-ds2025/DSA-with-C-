#include<bits/stdc++.h>
using namespace std;

int main(){
    // for ascending order, syntax: sort(v.begin() , v.end());
    // for descending order, we can reverse the loop after sorting
    vector<int> v;
    v.push_back(4);
    v.push_back(1);
    v.push_back(0);
    v.push_back(9);
    v.push_back(5);
    v.push_back(7);
    v.push_back(2);
    v.push_back(1);
    v.push_back(8);
    v.push_back(3);
    cout<<"Without sorting, v: ";
    for(short i = 0; i<v.size(); i++) cout<<v[i]<<" "; cout<<endl;

    sort(v.begin(),v.end());

    cout<<"With normal sorting (ascending order), v: ";
    for(short i = 0; i<v.size(); i++) cout<<v.at(i)<<" "; cout<<endl;

    cout<<"With sorting (descending order), v: ";
    for(short i = v.size()-1; i>=0; i--) cout<<v[i]<<" "; cout<<endl; // reverse the loop to get descending order shorting

}