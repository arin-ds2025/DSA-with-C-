/*
    Write a C++ program to input any character and check whether it is the alphabet or digit or any
    special character
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    char ch;cout<<"Enter a character : ";cin>>ch;cout<<endl;
    if(ch<='z' && ch>='a') cout<<ch<<" is a lower case alphabet";
    else if(ch<='Z' && ch>='A') cout<<ch<<" is an Upper Case alphabet";
    else if (ch>='0' and int(ch)<='9') cout<<ch<<" is a digit";
    else cout<<ch<<" is a special character";
}