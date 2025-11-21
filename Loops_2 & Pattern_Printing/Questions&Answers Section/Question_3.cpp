/*
    Wap to print reverse of a given number 
*/

#include<bits/stdc++.h>
using namespace std;

int main (){
    int num1,num2,num3; cout<<"Enter a number : "; cin>>num1; num2 = num1; num3 = num1; cout<<endl;
    cout<<"The reverse for of this number ("<<num2<<") is : ";
    if(num1==0) cout<<num1;
    else {
        while(num1>0){
            cout<<(num1%10);
            num1/=10;
         }
    }

    // or in another way
    cout<<"  >--in another way-->  ";
    int r = 0;
    while(num3>0){
        r*=10;
        r += (num3%10);
        num3/=10;
    }
    cout<<r;
}