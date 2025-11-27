/*
    Print first 'n' fibonacci numbers
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    short n;  cout<<"Enter a number: ";  cin>>n;  cout<<endl;
    short a=1, b=1, sum=0;
    if(n==0) cout<<"0 is the 1st fibonacci number"; 
    else if(n==1) cout<<n<<" is both 2nd and 3rd fibonacci number";
    else if(n==2) cout<<"First ("<<n<<")th fibonacci numbers: 0 "<<a<<" ";
    else{
        cout<<"First ("<<n<<")th fibonacci numbers: 0 "<<a<<" "<<b<<" ";
        for(short i = 1; i<=n-3; i++){ // n-2 beacuse of first three  numbers are printed already (0 1 1)
            sum = a+b;
            cout<<sum<<" ";
            a = b;
            b = sum;
        } cout<<endl<<endl;

        // or in another way ,, initializing a = 0, b = 1
        short a1 = 0, b1 = 1, sum1 = 0;
        cout<<"First ("<<n<<")th fibonacci numbers: "; cout<<a1<<" "<<b1<<" ";
        for (short i = 3; i<=n; i++){ // i = 3 beause of first two numbers are already printed (0 1)
            sum1 = a1 + b1;
            cout<<sum1<<" ";
            a1 = b1;
            b1 = sum1;
        }
    }
}