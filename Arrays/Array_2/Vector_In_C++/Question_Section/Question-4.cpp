/*
    Two pointers:

    Write a program to reverse the array without using any extra variable
*/

#include<bits/stdc++.h>
using namespace std;

void display(vector<int> vd){
    for(short i = 0; i<vd.size(); i++){
        cout<<" "<<vd.at(i);
    }
    cout<<endl<<endl;
}

int main(){
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(6);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(7);    
    v1.push_back(4);
    cout<<"Befor reverse, v1: ";
    display(v1);

    cout<<"After reverse, v1: ";
    // reverse
    // using while loop
    short i = 0, j = v1.size()-1;
    while(i<=j){
        // swap v1[i] and v[j]
        v1[i] = v1[i] + v1[j];
        v1[j] = v1[i] - v1[j];
        v1[i] = v1[i] - v1[j];
        // increase i and decrease j
        i++;
        j--;
    }
    display(v1);

    // using for loop.. we can use multiple variable in for loop with multiple condtions and initialization
    cout<<"After one reverse, v1: ";
    for(int i = 0,j=v1.size()-1;  i<=j;  i++,j--){
        int temp = v1[i];
        v1[i] = v1[j];
        v1[j] = temp;
    }
    display(v1);
}