/*
    Write a function to count number of digits in a numbers and then print the square of those digits.
*/

#include<bits/stdc++.h>
using namespace std;

void cntANDsqr(int &n){
    int r,cnt = 0, m = n;
    while(n>0){
        //r*=10;
        //r+=(n%10);
        r=(n%10);
        cout<<"Square of "<<r<<" is: "<<r*r<<endl;
        n/=10;
        //r/=10;
        cnt++;
    }
    cout<<endl<<"There are "<<cnt<<" digits in ("<<m<<")";
}

int main(){
    int num; cout<<"Enter a number: "; cin>>num; cout<<endl;
    cntANDsqr(num);
}
