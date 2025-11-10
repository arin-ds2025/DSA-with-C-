#include <iostream>
using namespace std;
int main(){
    // simple interest = (p * r * t) / 100. here, p = principal amount,r = rate, t = time
    float p,r,t;
    cout<<"Enter principal amount : "; cin>>p; cout<<endl;
    cout<<"Enter rate : "; cin>>r; cout<<endl;
    cout<<"Enter time in years : "; cin>>t; cout<<endl<<endl;
    cout<<"Simple Interest is: "<<(p*r*t)/100;
}