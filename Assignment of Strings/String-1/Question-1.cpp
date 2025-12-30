/*
    Input a string of size n and update all the odd positions in the string to character '#'.
    Consider 0-based indexing 
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    short n; cout<<"Enter the size of string: "; cin>>n; cout<<endl;

    string name;
    cout<<"Enter your string: "; cin>>name; cout<<endl;

    // updating the odd position and then print
    // for(short i = 0; i<n; i++){
    //     if(i%2!=0) name[i] = '#';
    //     cout<<name[i];
    // }

    // shortcut 
    n = name.size(); // for more accuracy
    for(short i = 1; i<n; i+=2) name[i] = '#';
    cout<<name; // we can print the string direct

}