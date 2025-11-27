/*
    Wap to print the count of a given number and sum of all the even digits of that given number.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    /*
        we can count digits by dividing the number by 10 until it becomes 0
        and we can sum digits by getting last digit using modulus operator 
    */
    int eve,r_eve,cnt; cout<<"Enter a number to count and sum of even the digits: "; cin>>eve; cnt=eve; r_eve= eve;  cout<<endl;
    short sum = 0,count = 0;
    // for count those digits:
    if(cnt==0) count++;
    while(cnt>0){cnt/=10; count++;} 
    cout<<"The count of digits in this number ("<<r_eve<<") is: "<<count<<endl<<endl;

    // for sum of even digits:
    if(eve==0) sum+=0;
    while(eve>0){
        short digit = eve%10;
        if(digit%2==0) sum+=digit;
        eve/=10;
    }
    cout<<"The sum of even digits in this number ("<<r_eve<<") is: "<<sum;
}