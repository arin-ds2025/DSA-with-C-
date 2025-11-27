/*
    Print the given pattern: (Star Pyramid)

                *
              * * *
            * * * * *
          * * * * * * *
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    short n; cout<<"Enter the row number: "; cin>>n; cout<<endl;
    // manage the pyramid with spaces and using ta method of star triangle flipped
    // but this is not appropriate
    for(short i = 1; i<=n; i++){
        for(short j = 1; j<=n-i; j++){
            cout<<"  ";
        }
        for(short k = 1; k<=i; k++) cout<<"  * "; cout<<endl;
    }
    cout<<endl<<endl;
 
    // with spaces and with and without flip triangle stars:
    // this is appropriate and full fill the pattern
    for(short i = 1; i<=n; i++){
        // for spaces
        for(short j = 1; j<=n-i; j++) cout<<"  ";
        // for star triangle flipped
        for(short k = 1; k<=i; k++) cout<<" *";
        // for star triangle:
        for(short l = 1;l<=i-1; l++) cout<<" *"; cout<< endl;
    }
    cout<<endl<<endl;

    // with formula.. using nth odd number(2n-1) in each row with spaces
    // this also appropriate to print pyramid
    for(short k = 1; k<=n; k++){
        for(short l = 1; l<=n-k; l++) cout<<"  ";
        for(short g = 1; g<=2*k-1; g++) cout<<" *"; cout<<endl;
    }
    cout<<endl<<endl;

    // another appropriate way,, using nst & nsp (number of stars and number of spaces) , both nsp and nst depends on i (row number)
    // in each line, nsp = n-1 & nsp--
    // nst 1 to n+=2
    short nsp = n-1, nst = 1;
    for(short i = 1; i<=n; i++){
        //for nsp
        for(short j = 1; j<=nsp; j++) {cout<<"  ";} nsp--;
        // for nst
        for(short k = 1; k<=nst; k++) {cout<<" *";} nst+=2; cout<<endl;
    }
}