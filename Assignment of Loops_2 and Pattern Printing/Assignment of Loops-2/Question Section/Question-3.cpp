/*
    Print the factorials of first 'n' numbers.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    short n; cout<<"Enter a number: "; cin>>n; cout<<endl;
    int fact = 1;
    for(short i = 1; i<=n; i++){
        fact*=i;
        cout<<i<<"! is: "<<fact<<endl;
    }
}