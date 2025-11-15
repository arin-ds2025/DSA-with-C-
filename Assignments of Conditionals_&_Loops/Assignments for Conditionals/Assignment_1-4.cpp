/*
    Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or
    isosceles triangle
*/

#include<iostream>
using namespace std;

int main(){
    /*
        Equilateral = (a = b = c)
        scalene = (a != b != c)
        isosceles = ( a = b != c  or
                      a = c != b  or
                      b = c != a )
    */
    short a,b,c; cout<<"Enter the sides of the triangle, example (2 3 4): ";cin>>a>>b>>c;cout<<endl;
    if((a == b) and (a == c)) cout<<"This is an equilateral triangle"<<endl;
    else if ((a != b) and (b != c) and (c != a)) cout<<"This is a scalene triangle"<<endl;
    else if(((a == b) and (b != c)) or ((a == c) and (c != b)) or ((b == c) and (c != a))){
        cout<<"This is an isosceles triangle"<<endl;
    }else cout<<"Invalid input";

    // Notice: We can also use and,or instead of &&,||.. like python
}