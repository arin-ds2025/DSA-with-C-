/*
    Print the given pattern:

    A B C D
    A B C D
    A B C D

*/

#include<bits/stdc++.h>
using namespace std;

int main (){
    short n; cout<<"Enter the row number: "; cin>>n; cout<<endl;
    for(short i = 1; i<=n; i++){
        for(short j = 1; j<=n; j++){
            cout<<" "<<char(('A' - 1)+j)<<" ";
        }cout<<endl;
    }
}