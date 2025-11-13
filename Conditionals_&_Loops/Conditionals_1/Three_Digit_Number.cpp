// Take positive integer input and tell if it is a three digit number or not.

#include <iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter a positive number: ";
    cin>>x;
    if(x >= 000){cout<<"Technically 000 has 3 digit but it can be used as a password but not taken as a number";}
    else if(x<0){
        cout<<"Your given input was a negative integer."<<endl<<"So we convert it to positive for you.!"<<endl;
        if(abs(x)>=100 && abs(x)<=999){
            cout<<"You Given input number ("<<abs(x)<<") is a 3 digit number";
        }else{cout<<"Your given int number ("<<abs(x)<<") is not a 3 digit number";}
    }else{
        if(x>=100 || x<=999){
            cout<<"You Given input number ("<<x<<") is a 3 digit number";
        }else{cout<<"Your given int number ("<<x<<") is not a 3 digit number";}
    }
}