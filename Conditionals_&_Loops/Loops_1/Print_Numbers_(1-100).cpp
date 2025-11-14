#include<bits/stdc++.h>
using namespace std;

int main(){
    int i = 1;
    while (i<101) {cout<<" "<<i<<" "; i++;}
    cout<<endl<<endl<<"Even Numbers : \n";
    // print all even and odd numbers between 1-100
    short x = 1;
    while(x<101){ 
        if(x%2==0) cout<<" "<<x<<" ";
        x++;
    }
    cout<<endl<<endl<<"Odd Numbers : \n";
    for(int i=1;i<101;i++){ 
        if(i%2!=0) cout<<" "<<i<<" ";
    }


    return 0;
}