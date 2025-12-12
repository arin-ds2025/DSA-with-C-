/*
    Find the doublet in the array whose sum is equal to the given value x
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    // mainly we've to find out the sum of elements  in the given array which is equal to input x
    // the outputs will be in index pair, like x = 7, so (0,7),(1,6),(2,5),(3,4)...etc

    short x,y; cout<<"Enter target: "; cin>>x; cout<<"Enter the array size: "; cin>>y; cout<<endl;
    vector<int> v;
    // v.push_back(1);
    // v.push_back(3);
    // v.push_back(2);
    // v.push_back(4);
    // v.push_back(3);
    // v.push_back(4);
    // v.push_back(1);
    // v.push_back(6);
    // v.push_back(3);
    // v.push_back(2);
    // v.push_back(4);
    cout<<"Enter the elements of array: ";
    for(short k = 0; k<y; k++){
        short i;
        cin>>i;
        v.push_back(i);
    }
    cout<<endl<<endl;
    
    short count = 0;
    for(short i = 0; i<v.size()-1; i++){ // here we need to check from first index to second last index
        for(short j = i+1; j<v.size(); j++){ // here we need to check from next index of i to last index
            if(v[i]+v[j]==x) {
                cout<<"( index no."<<i<<" <"<<v[i]<<"> , index no."<<j<<" <"<<v[j]<<"> ) = "<<x<<endl;
                count++;
            }    
        }
    }
    cout<<endl<<"Total count is: "<<count;
    cout<<endl<<endl;

    // or

    short count2 = 0;
    for(short i = 0; i<v.size(); i++){ // here we need to check from first index to last index
        for(short j = v.size()-1; j>=0; j--){ // here we need to check from last index to first index
            if(i>=j) continue; // it will skip the doublicate index.
            if(v[i]+v[j]==x) {
                cout<<"( index no."<<i<<" <"<<v[i]<<"> , index no."<<j<<" <"<<v[j]<<"> ) = "<<x<<endl;
                count2++;
            }    
        }
    }
    cout<<endl<<"Total count2 is: "<<count2;



}