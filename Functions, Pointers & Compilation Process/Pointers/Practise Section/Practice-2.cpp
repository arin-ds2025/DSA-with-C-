/*
    Write a function to find out the  first and last digit of a given number without returning anything.
*/
#include<bits/stdc++.h>
using namespace std;

void first_last(short &x){
    short ld = x%10, fd;
    while(x>9){
        x/=10;
    }
    
    fd = x;
    
    cout<<"The first digit of your given number is: "<<fd<<endl;
    cout<<"The last digit of your given number is: "<<ld<<endl;
}

int main(){
    short n; cout<<"Enter a number: "; cin>>n; cout<<endl;
    first_last(n);
}
