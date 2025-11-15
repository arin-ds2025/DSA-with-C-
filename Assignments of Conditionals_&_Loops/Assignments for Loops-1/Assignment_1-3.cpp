/*
    Print the table of 'n'. here, 'n' is an integer input,which given by the user 
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    short n; cout<<"Enter an integer to print the table : "; cin>>n; cout<<"The table of "<<n<<" is: "<<endl;
    for(short x = 1; x<11; x++){cout<<n<<" * "<<x<<" = "<<n*x<<endl;}
}