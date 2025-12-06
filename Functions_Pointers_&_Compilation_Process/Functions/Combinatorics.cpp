#include<bits/stdc++.h>
using namespace std;

// for factorial
float fact(float n){
    float x = 1.0;
    for(float i = n; i>=1; i--) x*=i; return x;
}

//for permutation:
void permutation(float x, float y){
    // formula: nPr = n! / (n-r)!
    float p = fact(x)/ fact(x-y);
    cout<<x<<"P"<<y<<" is: "<<p;
}

//for combination
void combination(float x, float y){
    // formula: nCr = n! / (r! * (n-r)!)
    float c = fact(x)/(fact(y)*fact (x-y));
    cout<<x<<"C"<<y<<" is: "<<c;
}


int main(){
    float n,r; cout<<"Enter the value of n: "; cin>>n; cout<<"Enter the value of r: "; cin>>r; cout<<endl;
    permutation(n,r);
    cout<<endl;
    combination(n,r);
}
