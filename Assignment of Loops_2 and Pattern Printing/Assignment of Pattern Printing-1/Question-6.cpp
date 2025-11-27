/*
    Print the given pattern: (Hollow Rectangle)

        * * * * * * 
        *         *
        *         *
        * * * * * * 
        
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    short r,c; cout<<"Enter row number: "; cin>>r; cout<<"Enter column number: "; cin>>c; cout<<endl;

    // top row stars
    for(short i = 1; i<=r; i++) cout<<" *"; cout<<endl;

    // middle spaces and stars
    // for stars
    for(short i = 2; i<=c-1; i++){ // c-1 for rows between top and bottom
        cout<<" *";
        // for spaces
        for(short j = 1; j<=r-2; j++) cout<<"  "; cout<<" *"; // r-2 for spaces between stars
        cout<<endl;
    }

    // bottom row stars
    for(short i = 1; i<=r; i++) cout<<" *";

    cout<<endl<<endl;

    // in another way..!
    for(short a = 1; a<=r; a++){ // r for rows
        for(short b = 1; b<=c; b++){ // c for columns
            if(a==1 or a==r || b==1 or b==c) cout<<" *";
            else cout<<"  ";
        }cout<<endl;
    }
}