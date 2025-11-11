#include<iostream>
using namespace std;

int main(){
    int p =10,q = 5;
    p+=q-=p; // here first q-=p is executed then p+=q , that means q = q-p = -5 then p = p+q = 10-(-5) = 5,, means right to ledt associativity
    cout<<"q = "<<q<<" and p = "<<p<<endl;
    cout<<endl;

    // solve this expression: a = 4 + 2 % -8
    int a = 4+2%-8; // here 2%(-8) = 2 because when the divisor is negative then the result is always  dividend (a % -b = a)
    cout<<"a = "<<a<<endl;
}