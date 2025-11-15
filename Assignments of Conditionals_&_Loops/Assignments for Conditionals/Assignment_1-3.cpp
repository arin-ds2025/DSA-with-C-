/*
    Given the length and breadth of a rectangle, write a program to find whether the area of the rectangle
    is greater than it perimeter or not.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    /*
        area = length * breadth
        perimeter = 2 * (length + breadth)
    */

    short l,b;cout<<"Enter the length: ";cin>>l;cout<<"Enter the breadth: ";cin>>b;cout<<endl;
    float area = l*b, perimeter = 2 * (l+b);
    if(l>0 && b>0){
        cout<<"The area of the rectangle is: "<<area<<endl<<"The perimeter of the rectangle is: "<<perimeter<<endl;
        (area>perimeter)?cout<<"So, Area is greater than perimeter":cout<<"So, Perimeter is greater than area";
    }else cout<<"Invalid input.. please give positive integer inputs..!";
}