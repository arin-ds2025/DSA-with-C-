/*
    Print the pattern:  (Binary triangle)

    1 
    0 1
    1 0 1
    0 1 0 1

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    short n; cout<<"Enter the row number: "; cin>>n; cout<<endl;

    // with extra variable:
    /*
        1           here, the odd row starts with 1 and the even row starts with 0
        0 1 
        1 0 1
        0 1 0 1
    */
    short a;
    for(short i = 1; i<=n; i++){
        if(i%2!=0) a = 1; else a = 0;
        for(short j = 1; j<=i; j++){
            cout<<a<<" ";
            // flipping
            if(a==1) a = 0; else a = 1;
        }cout<<endl;
    }
    cout<<endl<<endl;

    // with mathematic formula:
    /*
         1 2 3 4 --> column
      1  1                     where , i==j  or i and j both are odd or both are even, there it's 1,, else it's 0
      2  0 1
      3  1 0 1
      4  0 1 0 1
      -
      -
      row
    */
    for(short k = 1; k<=n; k++){
        for(short l = 1; l<=k; l++){
            if((k%2==0)==(l%2==0) or (k%2!=0)==(l%2!=0)) cout<<1<<" ";  // in short if((i+j)%2 == 0 or (i+j)%2 != 0) cout<<1;
            else cout<<0<<" ";
        }cout<<endl;
    }
}