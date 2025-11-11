//find the output of this code:

#include <iostream>
using namespace std;

int main(){
    int x,y,m;
    cout<<"Enter the first number: "<<endl;
    cin>>x;
    cout<<"Enter the second number and value for taking modulus: \n";
    cin>>y>>m;
    int z = (x*y)%m;
    cout<<"The result of (x*y)%m is: "<<z<<endl;
    return 0;
}