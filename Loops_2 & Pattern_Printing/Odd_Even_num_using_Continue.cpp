/*
    Wap to print odd and even numbers from 1 to 100
*/

#include<bits/stdc++.h>
using namespace std;

int main (){
    cout<<"Even Numbers between 1-100: "<<endl;
    for(short i=1; i<101; i++){if(i%2!=0) continue; cout<<" "<<i<<" ";}
    cout<<endl<<endl<<"Odd Numbers between 1-100:"<<endl;
    for(short i=1; i<101; i++){if(i%2==0) continue; cout<<" "<<i<<" ";}
}