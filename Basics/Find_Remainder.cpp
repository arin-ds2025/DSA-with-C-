#include <iostream>
using namespace std;

int main(){
    // dividend = divisor * quotient + remainder
    int divident = 10, divisor = 3;
    int quotient = divident / divisor;
    int remainder = divident - (divisor * quotient);
    // int remainder = divident % divisor; // % called modulus operator to find remainder in shortcut
    cout<<"Quotient: "<<quotient<<endl<<"Remainder: "<<remainder<<endl;


    // in case of using modulus operator
    /*
        if dividend = divisor , then remainder = 0
        it dividend > divisor, then remainder < divisor
        if divident < divisor, then remainder = dividend

        if -dividend % divisor, then remainder = -(dividend % divisor)
        if dividend % -divisor, then remainder is positive and as usual (dividend % divisor)
        if -dividend % - divisor, then remainder = -(dividend % divisor)
    */
    cout<<"4 % 10 : "<< 4%10<<endl; // remainder = dividend(4) cause dividend(4) < divisor(10)
    cout<<"20 % 3 : "<< 20%3 <<endl<<"6 % 6 : "<< 6%6 <<endl<<"5 % 17 : "<< 5%17 <<endl;
    cout<<"-10 % 4 : "<<-10%4<<endl<<"11 % -3 : "<<11%-3<<endl<<"-3 % 6 : "<<-3%6<<endl<<"-5 % -3 : "<<-5%-3<<endl;
}