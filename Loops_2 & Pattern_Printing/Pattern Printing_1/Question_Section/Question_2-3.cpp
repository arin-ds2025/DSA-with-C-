/*
    Print the given pattern:

    * * * *
    * * *
    * *
    * 
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    short n,count = 1; cout<<"Enter the row number: "; cin>>n; cout<<endl;
    for(short l = n; l>=1; l--){ 
        cout<<count++<<" --row-> ";
        for(short m = l; m>=1; m--){
            cout<<" * ";
        }cout<<endl;
    }
    cout<<endl;

    // in another way
    /*
        assume the pattern is:
        
          1 2 3 4      
        1 * * * *       here in each row,, the number of rows + the number of columns = n+1 (n is the given input)
        2 * * *         so the number of starts or how many columns print in each row is ((n+1) - i), ( i is the row number)
        3 * *
        4 *
    */
    for(short i = 1; i<=n; i++){
        cout<<i<<" --row--> ";
        for(short j = 1; j<=n+1-i; j++) cout<<" * "; cout<<endl;
    }
}