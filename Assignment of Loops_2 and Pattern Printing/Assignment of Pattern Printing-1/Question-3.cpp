/*
    Print the given patterns:  (Alphabet Triangle)
       A                    a
       A B                  b b
       A B C                c c c
       A B C D              d d d d

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    short rs; cout<<"Enter the row number: "; cin>>rs; cout<<endl;
    // for upper case alphabets:
    for(short i = 1; i<=rs; i++){
        // short a = 0;
        for(short j = 1; j<=i; j++){
            // cout<<" "<<char('A'+a);
            cout<<" "<<char('A'+j-1); 
            // a++; 
        }cout<<endl;
    }
    cout<<endl<<endl;

    // for lower case alphabets:
    for(short s = 1; s<=rs; s++){
        for(short t = 1; t<=s; t++){
            cout<<" "<<char('a'+s-1);
        }cout<<endl;
    }
}