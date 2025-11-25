/*
    print the given pattern:
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    short n; cout<<"Enter the row number: "; cin>>n; cout<<endl;
    for(short k = 1; k<=n; k++){for(short p = 1; p<=k; p++) cout<<" "<<p<<" "; cout<<endl;}
    cout<<endl<<endl;

    // if the pattern was:
    /*
        1 
        2 2
        3 3 3
        4 4 4 4
        5 5 5 5 5

        the the code could be:
    */
   for(short i = 1; i<=n; i++){for(short j = 1; j<=i; j++) cout<<" "<<i<<" "; cout<<endl;}
}