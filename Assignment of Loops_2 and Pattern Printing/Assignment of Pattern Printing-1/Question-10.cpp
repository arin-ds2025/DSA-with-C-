/*
    Print the given pattern:

                 *
               * *
             * * * 
           * * * *
             * * *
               * *
                 *  
                 
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    short n ; cin>>n; cout<<endl;
    
    // upper triangle:
    for(short i = 1; i<=n; i++){
        // for spaces
        for(short j = 1; j<=n-i; j++) cout<<"  ";
        // for stars
        for(short k = 1; k<=i; k++) cout<<" *"; cout<<endl;
    }

    // lower triangle:
    for(short i = 1; i<=n-1; i++){
        //for spaces
        for(short j = 1; j<=i; j++) cout<<"  ";
        // for stars
        for(short k = 1; k<=n-i; k++) cout<<" *"; cout<<endl;
    }
}