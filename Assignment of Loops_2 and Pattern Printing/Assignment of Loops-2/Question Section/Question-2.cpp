/*
    Wap to print the sum of given number and its reverse
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    long num, sum=0, _num; cout<<"Enter a number: "; cin>>num; _num=num; cout<<endl; 

    // the reverse form of the given number
    int r = 0;
    while(num){
        r *= 10;
        r += (num % 10);
        num /= 10;
    }
    cout<<"The sum of the digits of this number ("<<_num<<") is: "<<r<<endl<<endl;

    // sum of the given number and its reverse
    cout<<"The sum of "<<_num<<" and its reverse ("<<r<<") is: "<<_num + r<<endl;
}