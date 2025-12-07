/*
 Write a function to print squares of first 'n' natural numbers , take 'n' as an argument to
 the function.
*/

#include<bits/stdc++.h>
using namespace std;

void square(short &n){
    for(short i = 1; i<=abs(n); i++) cout<<i<<" to the power 2 is: "<<i*i<<endl;
}

int main(){
    short n; cout<<"Enter a number: "; cin>>n; cout<<endl;
    square(n);
}
