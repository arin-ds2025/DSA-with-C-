/*
    Given the radius of the circle, predict whether the area of this circle is larger than the
    circumference or not..!  

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    float r,pi=3.1416; cout<<"Enter the radius: ";cin>>r;cout<<endl;
    float rad = pi*r*r, cmfc = 2*pi*r;
    cout<<"The area of this circle is: "<<rad<<endl<<"The Circumference of this circle is: "<<cmfc<<endl;
    if(r>0)
        (rad > pi) ? cout<<"So,Area of this circle is larger than Circumference" : cout<<"So, Circumference of this circle is larger than radius";
    else
        cout<<"Please give positive and valid input for radius..!";

}