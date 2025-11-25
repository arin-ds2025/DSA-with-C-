/*
    Print the given pattern:
    1
    1 3
    1 3 5
    1 3 5 7
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    short n; cout<<"Enter the row number: "; cin>>n; cout<<endl;
    // with external variable
    for(short i = 1; i<=n; i++){
        short a = 1;
        for(short j = 1; j<=i; j++){
            cout<<" "<<a<<" "; a+=2;
        } cout<<endl;
    }
    cout<<endl<<endl;

    // with formula; (2n - 1 and increase the iterator with 2)
    for(short i = 1; i<=n; i++){
        for(short k = 1; k<= 2*i-1; k+=2) cout<<" "<<k<<" "; cout<<endl;
    }
}