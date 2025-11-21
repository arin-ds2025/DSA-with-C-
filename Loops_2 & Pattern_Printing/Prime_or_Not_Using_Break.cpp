/*
    Wap to check if a number is prime or not 
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    short num;
    cout<<"Enter a number to check, if it is prime or not: "; cin>>num; cout<<endl;
    bool flag = 1;
    for(int i = 2; i<num; i++){
        if(num%i==0){
            flag = 0;
            break;
        }
    }
    if(num==1) cout<<num<<" is neither prime nor composite";
    else if(num==2) cout<<num<<" is a prime number";
    else (flag == 0)? cout<<num<<" is a composite number" : cout<<num<<" is a prime number";
}