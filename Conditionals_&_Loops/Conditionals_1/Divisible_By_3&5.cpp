// take positive integer input & tell if it is divisible by 3 & 5

#include<iostream>
using namespace std;

int main(){
    short x;
    cout<<"Enter a number: "; cin>>x;
    if(x==0){cout<<"The number should not be 0..Try another number";}
    // else if(x%5==0 && x%3==0){cout<<x<<" is divisible by both 5 and 3";} // in short, we can use x%(3*5)
    else if(x%(3*5)==0){cout<<x<<" is divisible by both 5 and 3";}
    else if(x%3==0){cout<<x<<" is only divisible by 3 but not by 5";}
    else if(x%5==0){cout<<x<<" is only divisible by 5 but not by 3";}
    else{cout<<"Tumsein na ho payge beta,, chor doo tum";}
}