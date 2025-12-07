/*
    Given two numbers a and b, write a function to print all odd numbers between them.
*/

#include<bits/stdc++.h>
using namespace std;

// int mini(short &a, short &b){
//     if(a<b) return a;
//     else return b;
// }

// int maxi(short &a, short &b){
//     if(a>b) return a;
//     else return b;
// }

int sWaP (short &a, short &b){
    a = a + b;
    b = a - b;
    a = a - b;
    return 0;
}

void allOdd(short a, short b){

    if(a>b) sWaP(a,b);

    for(short v = a; v<=b; v++){
        if(v%2!=0) cout<<" "<<v;
    }
}

int main(){
    short a,b; cin>>a>>b;
    allOdd(a,b);
}
