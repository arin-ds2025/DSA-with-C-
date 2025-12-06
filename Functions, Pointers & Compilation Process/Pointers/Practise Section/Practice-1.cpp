/*
    write a program to calculate sum of two numbers using pointers.
*/

#include<bits/stdc++.h>
using namespace std;

void sum(short *p1, short *p2){
    cout<<*p1<<" + "<<*p2<<" = "<<*p1+*p2<<endl;
}

int main(){
    short a = 2, b = 8;
    cout<<"a: "<<*(&a)<<"  b: "<<*(&b)<<endl;
    sum(&a,&b);

    cout<<endl<<endl;
    
    // we can also take input from user for pointers
    short x,y; 
    short* px = &x;
    short* py = &y;
    cout<<"Enter first number: "; cin>>*px; cout<<"Enter second number: "; cin>>*py; cout<<endl;
    cout<<"x: "<<*px<<"  y: "<<*py<<endl;
    sum(px,py);
}
