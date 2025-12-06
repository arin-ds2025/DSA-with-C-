#include<bits/stdc++.h>
using namespace std;

int main(){
    int x = 69;
    int * ptr = &x;
    int ** p = &ptr;
    // we can print the value of x using **p and print the address of x using *p

    cout<<"x: "<<x<<endl<<"ptr: "<<endl<<"*ptr: "<<*ptr<<endl<<"**p: "<<**p<<endl;
    cout<<"Address of x  by x: "<<&x<<" and by ptr: "<<ptr<<" and by *p: "<<*p<<endl;
    cout<<"Address of ptr by &ptr: "<<&ptr<<" and by p: "<<p<<endl;

    int *** q = &p; // triple pointer .. we can have n level of pointers for storing address
    cout<<"Address of p by &p: "<<&p<<" and by q: "<<q<<endl;
    cout<<"Value of x by ***q: "<<***q<<endl;
}
