/*
    Give a point (x,Y), write a program to find out if it lies on the on the x-axis, y-axis or at the
    origin,viz (0,0).    
*/

#include<iostream>
using namespace std;

int main(){
    short x,y;cout<<"Enter the value of x: ";cin>>x;cout<<"Enter the value of y: ";cin>>y;cout<<endl;
    if(x==0 and y==0) cout<<"It lies on the origin (0,0)"<<endl;
    else if(x==0 || y==0) (x==0)?cout<<"It lies on the Y-axis and it's on ("<<x<<","<<y<<") point":cout<<"It lies on the X-axis and it's on ("<<x<<","<<y<<") point";
    else cout<<"It lies on somewhere else, except on points : (0,0) or (0,Y-axis) or (X-axis,0)";
}