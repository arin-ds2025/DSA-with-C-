#include<iostream>
using namespace std;

int main(){
    int x=10, y=20;
    if(x == y); // after the if statement , there is a ; so it doesn't effect the next line
        cout<<"x: "<<x<<" and y: "<<y<<endl; // output will be this.. cause after that if statement,there is a ; 
    
    return 0;
}