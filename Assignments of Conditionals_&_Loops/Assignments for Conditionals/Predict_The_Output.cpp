#include<iostream>
using namespace std;

int main(){
    int a = 500, b = 300, c;
    if(a<500)
        b = 200; // there are no brackets, so only this line only consider as in if statement. not the next line
        c = a%b; // this line and the next line are not the part of if statement, so the value of b doesn't change. 
        cout<<"The value of b: "<<b<<" and c: "<<c<<endl;  // cause the if condition doesn't hit. so the value of b doesn't change

    return 0;
}