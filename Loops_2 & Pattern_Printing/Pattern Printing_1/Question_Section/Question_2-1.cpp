/*
    Print the given pattern: (with row and column number)

    1 2 3 4
    1 2 3 4
    1 2 3 4
    1 2 3 4
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    short n; cout<<"Enter the number of row: "; cin>>n; cout<<endl; 
    for(short i = 1; i<=n; i++){cout<<i<<" -row-> ";for(short j = 1; j<=n; j++){cout<<" "<<j<<" ";}cout<<endl;}
}