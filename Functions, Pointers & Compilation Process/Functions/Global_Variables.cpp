#include<bits/stdc++.h>
using namespace std;

short globalVar = 10; // This is a global variable

void print() { cout<<"Global variable inside print function: "<<globalVar<<endl; }

int main(){
    cout<<"Global variable inside main function: "<<globalVar<<endl;
    print();   
}
