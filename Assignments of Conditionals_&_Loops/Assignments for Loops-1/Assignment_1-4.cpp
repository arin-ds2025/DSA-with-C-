/*
    Display this AP(Arithmetic Progression) 4,7,10,13,16.. upto 'n' terms
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    /*
        formula: a+(n-1)d
        4, 7, 10, 13, 16...
        here, a = 4, n = 3
        so,  4 + (n-1) 3 = 3n+1
    */

    short n; cout<<"Enter the value of n: "; cin>>n; cout<<endl;

    // with formula
    for(short i = 4; i <= (3*n + 1); i+=3) cout<<" "<<i<<" ";cout<<endl;
    // or
    short a = 4, d = 3;
    for(short j = 1; j <= n; j++){
        cout<<" "<<a + (j-1)*d<<" ";
    }
    cout<<endl;


    // without formula (using separate variable)
    short extra = 4;
    for(short x = 1; x <= n; x++){
        cout<<" "<<extra<<" "; extra+=3;
    }


}