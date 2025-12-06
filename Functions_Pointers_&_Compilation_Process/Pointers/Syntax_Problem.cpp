#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 10, b = 20;
    //int* p1 = &a, p2 = &b; // Syntax Error: p2 should be a pointer
    int* p1 = &a, *p2 = &b; // Corrected  or int *p1 = &a, *p2 = &b;  this also works
    cout << "Value of a: " << *p1 << ", Value of b: " << *p2 << endl;
}