// Find the last occurrence of x in the array 

#include<bits/stdc++.h>
using namespace std;

int main(){
    // mainly we've to find out the last index of x if x is in that given array

    short x,idx; cout<<"Enter a number: "; cin>>x; cout<<endl;
    vector<int> v;
    // for(short i = 2;i<31; i++) { if(i%2==0) v.push_back(i);}
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    v.push_back(4);
    v.push_back(3);
    v.push_back(4);
    v.push_back(1);
    v.push_back(6);
    v.push_back(3);
    v.push_back(2);
    v.push_back(4);

    bool flag = 0;
    for(short i = v.size()-1; i>=0; i--){
        if(v.at(i)==x) { flag = 1; idx=i; break;} 
    }
    if(flag==1){
        cout<<"Size of the vector: "<<v.size()<<endl;
        cout<<"vector v: ";
        for(short i = 0; i<v.size(); i++) cout<<v.at(i)<<" "; cout<<endl;
        cout<<"The last occurrence of x ("<<x<<") is: "<<idx<<" no. index";
    }else{
        cout<<"Item not found..!"<<endl;
    }
}