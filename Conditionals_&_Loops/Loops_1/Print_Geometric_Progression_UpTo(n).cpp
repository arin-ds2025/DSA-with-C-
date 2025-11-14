#include<bits/stdc++.h>
using namespace std;

int main(){
    /*
        For Geometric Progression: 

        formula:
        a(n) = a*(r^n-1)
    */

    short n;cout<<"Enter the value of n: ";cin>>n;cout<<endl;

    // 1  2  4  8  16  32...
    //with separate variable:
    short a = 1;
    for(short i = 1;i<=n;i++){
        cout<<" "<<a<<" "; a*=2; // cause the ratio between those digits is, r = 2
    }cout<<endl;
    // or in shortcut with formula
    /*
        here, a = 1, r = 2
        so, 1*(2^n-1)
    */
    for(int i = 1; i<=(1*pow(2,n-1));i*=2){cout<<" "<<i<<" ";}
    cout<<endl<<endl;


    // 2  6  18  54  162...
    //with separate variable
    short b = 2;
    for(short i = 1; i<=n; i++){
        cout<<" "<<b<<" "; b*=3; // r = 3
    }cout<<endl;
    // in shortcut with formula:
    /*
        here a = 2, r = 3
        so, 2*(3^n-1)
    */
    for(short i = 2; i<=(2*pow(3,n-1));i*=3){cout<<" "<<i<<" ";}
    cout<<endl<<endl;
 
    return 0;
}