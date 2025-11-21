// Print factiorials 1,2,3... upto n

#include<bits/stdc++.h>
using namespace std;

int main(){
    short n,fact = 1; cout<<"Enter the value of n : "; cin>>n; cout<<endl;
    if(n==0) cout<<"Factorial of 0 is 1";
    else {
        cout<<"Factorial of 0 is 1"<<endl;
        for(short i = 1; i<=n; i++) {fact*=i; cout<<"Factorial of "<<i<<" is: "<<fact<<endl;}
    }
}