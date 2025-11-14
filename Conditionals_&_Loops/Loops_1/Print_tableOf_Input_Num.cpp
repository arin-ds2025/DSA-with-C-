#include<bits/stdc++.h>
using namespace std;

int main(){
    short x;cout<<"Enter a number: ";cin>>x;cout<<endl;
    for (short i = 1; i < 11; i++) cout<<x<<" * "<<i<<" = "<<i*x<<endl;
    cout<<endl<<endl;;

    // in another way,
    for(short i = x; i<=(x*10); i+=x) cout<<i<<endl;


    return 0;
}