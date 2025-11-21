#include<bits/stdc++.h>
using namespace std;

int main(){
    short num; cout<<"Enter a number: "; cin>>num; cout<<endl;
    for(short i = 2; i <= num-1; i++) if(num%i == 0){cout<<num<<" is a composite number"<<endl; break;}
}