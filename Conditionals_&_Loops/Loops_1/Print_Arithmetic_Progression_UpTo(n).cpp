#include<bits/stdc++.h>
using namespace std;

int main(){
    /*
        1 3 5 7 9 11 13 15 17 19 21....
     or 2 4 6 8 10 12 14 16 18 20 22.... 
        here, a = 1, d = 2
        a(n) = a+(n-1)d
             = 1+(n-1)2
             = 2n-1
    */

    short n;cout<<"Enter a number: ";cin>>n;cout<<endl<<"for Odd numbers: \n";
    for(int i = 1;i<=(2*n-1);i+=2) cout<<" "<<i<<" "; cout<<endl<<endl<<"for even numbers: \n";

    // in another way with separate variable (for even numbers)
    short a = 2; // if we want to print odd numbers,then it will a = 1;
    for(int i = 1;i<=n;i++){
        cout<<" "<<a<<" "; a+=2;
    }
    cout<<endl<<endl<<"for prime numbers: \n";

    // for prime numbers:
    int count = 0;
    for(int i = 2; count < n; i++){
        bool isPrime = true;
        for(int j = 2; j < i ; j++){
            if(i%j==0) {isPrime = false; break;}
        }
        if(isPrime){
            cout<<" "<<i<<" ";
            count++;
        }
    }
    cout<<endl<<endl<<"for 4 7 10 13 16 19.... :\n";

    // for 4 7 10 13 16 19...  :
    /* 
        here, a = 4, d =3

        a(n) = a+(n-1)d
             = 4+(n-1)3
             = 3n+1
    */
    for(int i = 4; i<=(3*n+1); i+=3) cout<<" "<<i<<" ";
    cout<<endl;
    // this problem also can be solved by using separate variable
    short b = 4;
    for(short i = 1; i<=n; i++){
        cout<<" "<<b<<" "; b+=3;
    }


    return 0;
}