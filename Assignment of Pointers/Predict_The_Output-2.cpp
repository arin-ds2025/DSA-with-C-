#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 15,b = 20;
    int *ptr_1 = &a; int *ptr_2 = &b;
    *ptr_1 = *ptr_2;
    cout<<"*ptr_1: "<<*ptr_1<<",  *ptr_2: "<<*ptr_2;
}
