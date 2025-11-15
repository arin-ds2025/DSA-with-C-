/*
    Any year is input , write a program to determine whether the year is a leap year or not
    (Considering leap year occurs after every 4 years)
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int year;cout<<"Enter a year: ";cin>>year;cout<<endl;

    if(year > 45)
        ((year%400==0) || ((year%100!=0) && (year%4==0))) ? cout<<"Yes, ("<<year<<") is a leap year" : cout<<"No, ("<<year<<") is not a leap year"; 
    else cout<<"From 45 BC , leap year was started.. so, give a valid input..!";
}