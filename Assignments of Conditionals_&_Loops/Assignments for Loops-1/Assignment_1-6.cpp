/*
    Write a program to print all the ASCII values and their equivalent charecters of 26 alphabets using 
    while loop
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int l_a = int('a'), l_z = int('z'), U_A = int('A'), U_Z = int('Z');
    while(l_a <= l_z){
        cout<<" "<<l_a<<" ("<<char(l_a)<<") "; l_a++;
    } 
    cout<<endl<<endl;
    while(U_A <= U_Z){
        cout<<" "<<U_A<<" ("<<char(U_A)<<") "; U_A++;
    }
}