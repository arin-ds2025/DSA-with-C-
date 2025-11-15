/*
    Display this GP(Geometrical Progression) - 3,12,48... upto 'n' terms 
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    /*
        formula: a*(r^n-1)
        3, 12, 48..
        here, a = 3, r = 4
        so, ar^n-1 = 3*4^n-1
    */

    short n; cout<<"Enter the value of n: "; cin>>n;cout<<endl;

    // with formula
    // for(short i = 3; i <= (3*pow(4,n-1)); i*=4) cout<<" "<<i<<" "; cout<<endl;
    //or
    short a = 3, r = 4;
    for(short x = 1; x <= n; a*=r){
        cout<<" "<<a<<" ";
        x++;
    }
    cout<<endl;

    // without formula (using separate variable)
    short extra = 3;
    for(short y = 1; y<=n; y++){
        cout<<" "<<extra<<" ";
        extra*=4;
    }
}