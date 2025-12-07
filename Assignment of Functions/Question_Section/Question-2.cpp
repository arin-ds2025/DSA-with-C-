/*
    Write a function that takes radius of a circle as an argument and return its area.
*/

#include<bits/stdc++.h>
using namespace std;

float areaOFcircle(short r){
    return 3.1416*r*r;
}

int main(){
    short r; cout<<"Enter a number: "; cin>>r; cout<<endl;
    cout<<"for radius ("<<r<<"),The area of circle is: "<<areaOFcircle(r)<<endl;
}
