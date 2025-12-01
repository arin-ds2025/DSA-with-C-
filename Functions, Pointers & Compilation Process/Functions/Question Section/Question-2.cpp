// Print the factorials of first 'n' numbers

#include<bits/stdc++.h>
using namespace std;

void nfact(short x){
    short fact = 1;
    for(short i = 1; i<=x; i++){
        cout<<i<<"! = "<<(fact*=i)<<endl;
    }
}

int main(){
    short n; cin>>n; cout<<endl;
    nfact(n);
}
