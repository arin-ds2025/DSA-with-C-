/*
    Two numbers are given by the user, Write a program to find the value of one number raised to the
    power of another.. (power or exponent >= 0)
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    short n,m; cout<<"Enter base : "; cin>>n; cout<<"Enter exponent : "; cin>>m; cout<<endl;
    short pow = 1;
    
    if(m==0 and n==0) cout<<"Invalid Input.. your base and exponent should not be 0 at a time..!"<<endl;
    else if(n==0 and m<0) cout<<"Invalid input..! 1/0 is an infinit entity..";
    else if(m<0){
        short k = -m;
        for(short i = 1; i<=k; i++){
           pow*=n;
        }
        cout<<"So, "<<n<<" to the power "<<m<<" is: 1/"<<pow;
    }
    else{for(short i = 1; i<=m; i++) pow*=n; cout<<"So, "<<n<<" to the power "<<m<<" is: "<<pow;}
}