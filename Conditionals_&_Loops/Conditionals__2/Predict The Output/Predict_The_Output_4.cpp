#include<bits/stdc++.h> // we can use this header to include all dependency libraries 
using namespace std;

int main(){
    short x = 5 > 8 ? 10 : 1 != 2 < 5 ? 20 : 30; // calculate right to left. 
    /*
        so , first, calcuate the nested ternary operation and then the outer ternary operation...
        in nested ternary's condition, the hierarchy of < is higher than != ( <,>,<=,>=  higher than  !=,== ) .. so first check is 2 < 5,
        yes it is true. so the condion will be 1 != 1 (cause true means 1), and it is false .. so the ultimate answer will be 30
    */
    cout<<"value of x is "<<x<<endl; 
    
    // another one:
    short test = 0; float f = 3.111;
    cout<<"test > 0 ? f : 0  =  "<<(test > 0 ? f : 0);
    return 0;
}