/*
    Wap to print sum of digits of a given number 
*/

#include<bits/stdc++.h>
using namespace std;

int main (){
    int num,num1; cout<<"Enter a number: "; cin>>num; num1 = num; cout<<endl;
    short sum = 0;
    while(num>0){
        sum += (num%10); // we can get last digit by modulus that number by 10
        num/=10;
    }
    cout<<"The sum of digits of this number ("<<num1<<") is : "<<sum;
}