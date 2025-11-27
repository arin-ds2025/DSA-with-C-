/*
    Print the given pattern (Number Bridge)

            1 2 3 4 5 6 7
            1 2 3   5 6 7
            1 2       6 7
            1           7

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    short n; cout<<"Enter the row number: "; cin>>n; cout<<endl;
    for(short i = 1; i<=2*n-1; i++) cout<<" "<<i; cout<<endl; // for first row
    for(short a = 1; a<=n-1; a++){ // for other rows
        short count = 1;
        // for left sided flipped number triangle
        for(short b = 1; b<=n-a; b++) {cout<<" "<<count; count++;}
        // for the middle pyramid shape spaces
        for(short s = 1; s<=2*a-1; s++) {cout<<"  "; count++;} // here we increse count, so that the flow of numbers which we need, are maintained
        // for right sided flipped number triangle
        for(short c = 1; c<=n-a; c++) {cout<<" "<<count; count++;}
        cout<<endl;
    }
}