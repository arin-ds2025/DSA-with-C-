/*
    Print the factorial of a given number 'n'
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    short n,fact=1; cout<<"Enter a number: "; cin>>n; cout<<endl;
    if(n==0) cout<<"The factiorial of "<<n<<" is 1";
    else {for(short i = 1; i<=n; i++) fact*=i; cout<<"The factorial of "<<n<<" is : "<<fact;}
}
