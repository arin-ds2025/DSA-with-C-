#include<bits/stdc++.h>
using namespace std;

int main(){
    // question: 100,97,94,.... up to all terms which are positive

    // short n;cout<<"Enter the value of n: ";cin>>n;cout<<endl;

    // with formula,
    for(int i = 100; i>0; i-=3){cout<<" "<<i<<" ";} cout<<endl;

    // with separate variable
    short a = 100;
   // for(int i = 1; a>0; i++){ // we can use for(;a>0;) instead of for(int i = 1;a>0;i++) ... shortcut
    for(;a>0;){    
        cout<<" "<<a<<" "; a-=3;
    }cout<<endl<<endl;


    return 0;
}