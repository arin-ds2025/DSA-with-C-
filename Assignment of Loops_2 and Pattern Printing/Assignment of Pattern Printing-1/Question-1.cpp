/*
    Print the given pattern: (Number Square)
    
    1 1 1 1 
    2 2 2 2
    3 3 3 3
    4 4 4 4       

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    short r; cout<<"Enter the row number: "; cin>>r; cout<<endl;
    for(short i = 1; i<=r; i++) { for(short j = 1; j<=r; j++) cout<<" "<<i; cout<<endl;}
}