// Print the nth fibonacci number 

#include<bits/stdc++.h>
using namespace std;

int main (){
    // fibonacci seris: 1  1  2  3  5  8  13  21 ...
    //  serial number:  1  2  3  4  5  6  7   8  ...
    short n; cout<<"Enter the value of n: "; cin>>n; cout<<endl;
    if(n==0) cout<<n<<" is neither first nor any fibonacci number";
    else if(n==1) cout<<n<<" is the 1st and 2nd fibonacci number";
    else if(n==2) cout<<"1 is the 1st and 2nd fibonacci number";
    else {
        short a=1,b=1,sum=0;
        for(short i = 1; i<=n-2; i++){ // cause 1,1 are already printed
            sum = a+b;
            a = b;
            b = sum;
        }
        cout<<sum<<" is the "<<n<<"th fibonacci number";
    }
}