/*
    Given three points (x1,y1), (x2,y2) and (x3,y3) , write a program to check if all these three points
    fall on one straight line 
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    short x1,y1 , x2,y2 , x3,y3; 
    cout<<"Enter the pair of (x1,y1): example(2 3) : ";cin>>x1>>y1; 
    cout<<"Enter the pair of (x2,y2): example(4 5) : ";cin>>x2>>y2; 
    cout<<"Enter the pair of (x3,y3): example(6 7) : ";cin>>x3>>y3; 
    cout<<endl;

    
    // formula
    /* 
        (x1,y1)---------(x2,y2)----------(x3,y3)

        slop, m1 = (y2-y1) / (x2-x1)
        slop, m2 = (y3-y2) / (x3-x2)

        if m1 == m2 then it will be considered as a straight line
    */

    float m1 = (y2-y1)/(x2-x1), m2 = (y3-y2) / (x3-x2);
    (m1==m2)?cout<<"The points fall on one straight line":cout<<"Points don't fall on straight line";
}