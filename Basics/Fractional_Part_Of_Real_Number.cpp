#include<iostream>
using namespace std;
int main(){
    // fractional part means after decimal part
    // for positive real number, fractional part :num - int(num)
    // but if the real number is negative then also the fractional part is positive
    // like the fractional part of -1.3 is 0.7 , because -1.3 = -2 + 0.7
    // in case of negative real number we have to use this formula without using ceil or floor function: 
    // for negative real number, fractional part: 1 - (int(num) - num)
    float num;
    cout<<"Enter a real number to get the fractional part: ";
    cin>>num;
    if(num>0){
        cout<<"The fractional part of "<<num<<" is: "<<num-int(num)<<endl;
    }else{
        cout<<"The fractional part of "<<num<<" is: "<<1-(int(num)-num)<<endl;
    }
}