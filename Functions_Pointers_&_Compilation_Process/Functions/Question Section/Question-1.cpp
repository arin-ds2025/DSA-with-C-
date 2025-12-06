/*
    Write a function to compute the greatest common divisor of two given numbers.
*/

#include<bits/stdc++.h>
using namespace std;

/*
    we need 2 things here,, HCF(Highest Common Factor) of those valuse and Minimum value from those given values
*/

short mini (short a, short b){
    short c;
    if(a>b) c=b;
    else c=a;
    return c;
}

short hcf (short x, short y){
    short HCF;
    for(short i = 1; i<=mini(x,y); i++){
        if(x%i==0 and y%i==0) HCF = i;   // here i is a common factor which continuously update the highest common factor in HCF
    }
    return HCF;
}

// with more optimization:
short hcf2 (short x, short y){
    short HCF;
    for(short i = mini(x,y); i>=1; i--){
        if(x%i==0 and y%i==0){
            HCF = i; 
            break;  // as we are starting from the maximum possible value so the first common factor we get is the HCF
        }    
    }
    return HCF;
}

int main(){
    short n,m; cout<<"Enter the first value: "; cin>>n; cout<<"Enter the second value: "; cin>>m; cout<<endl;
    cout<<"The greatest common divisor of "<<n<<" and "<<m<<" is: "<<hcf(n,m)<<endl;
    cout<<"(in another optimized approach) The greatest common divisor of "<<n<<" and "<<m<<" is: "<<hcf2(n,m);

}

