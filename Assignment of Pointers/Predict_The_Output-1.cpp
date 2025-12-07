#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 5, b =10;
    int *ptr = &a;
    b = (*ptr) + 1;
    ptr = &b;
    cout<<"*ptr: "<<*ptr<<",  a: "<<a<<",  b: "<<b<<endl;
}
