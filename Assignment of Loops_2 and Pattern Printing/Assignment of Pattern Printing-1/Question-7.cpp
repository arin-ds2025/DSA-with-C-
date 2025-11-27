/*
    Print the pattern: (rhombus of stars)
        rhombus-1                                reverse rhombus
        * * * *                  and             * * * *
         * * * *                                * * * *
          * * * *                              * * * *
           * * * *                            * * * *
        
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    short n; cout<<"Enter the row number: "; cin>>n; cout<<endl;
    // for rhombus
    for(short i = 1; i<=n; i++){
        // for spaces
        for(short j = 1; j<=i; j++) cout<<"  ";
        // for stars
        for(short k = 1; k<=n; k++) cout<<" *"; cout<<endl;
    }
    cout<<endl<<endl;

    // for reverse rhombus
    for(short a = 1; a<=n; a++){
        // for spaces
        for(short b = 1; b<=n-a; b++) cout<<"  ";
        // for stars
        for(short c = 1; c<=n; c++) cout<<" *"; cout<<endl;
    }
}