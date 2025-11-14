#include<bits/stdc++.h>
using namespace std;

int main(){
    short x = 3, y, z;
    y=x=10; // it calculates right to left. so first 10 will assign in x and then the value of x assign in y
    z = x<10; // it means, either 1(true) or 0(false will assign in z)
    cout<<"x: "<<x<<endl<<"y: "<<y<<endl<<"z: "<<z<<endl;
    
    return 0;
}