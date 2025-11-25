/*
    Print the given pattern:
    *
    * *
    * * *
    * * * *
    * * * * *
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    short n; cout<<"Enter the row number: "; cin>>n; cout<<endl;
    for(short i = 1; i<=n; i++){
        cout<<i<<" --row--> ";
        for(short j = 1; j<=i; j++){
            cout<<" * ";
        }cout<<endl;
    }

    /*
        if i, 1  to n and j, 1 to i,, it'll alway print thing type of pattern
        *
        **
        ***
        ****
        *****
        ------
        etc
    */
}