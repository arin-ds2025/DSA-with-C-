/*
    Wap to count digits of a given number
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    // while we divide a number by 10 then 1 count will be considered
    int x,count = 0,y; cout<<"Enter a number : "; cin>>x; y=x; cout<<endl; 
    if(x==0) count++;
    while(x>0){x/=10; count++;} 
    cout<<"The digits of this number ("<<y<<") is: "<<count;
}