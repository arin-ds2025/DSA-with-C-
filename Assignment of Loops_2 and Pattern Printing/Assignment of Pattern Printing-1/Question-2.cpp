/*
    Print the giveb patter: (Number Triangle reverse)

        1 2 3 4
        1 2 3
        1 2 
        1

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    short r; cout<<"Enter the row number: "; cin>>r; cout<<endl;
    /*
           1 2 3 4

        1  1 2 3 4  --->      n+1-1
        2  1 2 3    --->      n+1-2
        3  1 2      --->      n+1-3
        4  1        --->      n+1-4       so, it's n+1-row number
         
    */
    for(short a = 1; a<=r; a++) {for(short b = 1; b<=r+1-a; b++) cout<<b<<" "; cout<<endl;} 
}