/*
    Write a program to find out product of two numbers using pointers
*/

#include<bits/stdc++.h>
using namespace std;

void productOFnums(short *a, short *b){
    cout<<float((*a)*(*b))<<endl;
}

int main(){
    short a = 5, b = 8;
    productOFnums(&a,&b);
}
