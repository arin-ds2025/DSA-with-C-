/*
    Print the pattern:

    *
    * *
    * * *
    * * * *
    * * *
    * * 
    * 
    
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    short r; cin>>r; cout<<endl;

    // for upper triangle
    for(short i = 1; i<=r; i++){
        for(short j = 1; j<=i; j++) cout<<" *"; cout<<endl;
    }
    // for lower triangle
    for(short a = 1; a<=r-1; a++){
        for(short b = 1; b<=r-a; b++) cout<<" *"; cout<<endl;
    }
}