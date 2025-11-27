/*
    Print the pattern: (Rhombus)

            * * * *
          * * * *
        * * * * 
      * * * * 
       
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    short n; cout<<"Enter the row number: "; cin>>n; cout<<endl;
    for(short i = 1; i<=n; i++){
        // for spaces
        for(short j = 1; j<=n-i; j++){
            cout<<"  ";
        }

        // for stars
        for(short k=1; k<=n; k++) cout<<" *"; cout<<endl;
    }
}