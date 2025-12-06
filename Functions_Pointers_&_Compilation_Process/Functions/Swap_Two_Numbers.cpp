#include<bits/stdc++.h>
using namespace std;

// using extra variable
void sWaP(short a, short b){
    short temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"in sWap function (using extra variable): "<<endl<<"a: "<<a<<" and b: "<<b;
}

// without using extra variable
void sWap2(short a, short b){
    a = a + b;
    b = a - b;
    a = a - b;
    cout<<"in sWap2 function (without using extra variable): "<<endl<<"a: "<<a<<" and b: "<<b;
}

int main(){
    short a = 4, b = 7;
    cout<<"in main function :"<<endl<<"a: "<<a<<" and b: "<<b<<endl<<endl;
    sWaP(a,b); cout<<endl<<endl; 
    sWap2(a,b);
}
