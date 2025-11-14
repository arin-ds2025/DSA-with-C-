// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    short x = 65; char ch = 'A';
    if(x==ch) cout<<"A stands for Arin"<<endl; // here, the value of x will compare with the ASCII value of ch character
    else cout<<"C stands for Chutiya..!"<<endl;
    cout<<endl;

    //another one:
    short k = 40; cout<<"The value of k: "<<k<<endl;
    cout<<"k==40 : "<<(k==40)<<endl<<"k=50 : "<<(k=50)<<endl<<"k>40 : "<<(k>40)<<endl; // here, k=50 means, firs 50 assigns in k and then print the k
    cout<<endl;

    //another one: (The real things)
    short a;
    if(3+2%5) cout<<"This worsk.!"<<endl; // this line will print caise there aren't any condition
    if(a=10) cout<<"Even this works..!"<<endl; // same
    if(-5) cout<<"Surprisingly even this works...!"<<endl; // same
    if(0) cout<<"Unfortunately this doesn't work"; // cause 0 means false so autometically this line will be ignored.

    return 0;
}