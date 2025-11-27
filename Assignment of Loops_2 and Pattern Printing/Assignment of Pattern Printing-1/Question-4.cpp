/*
    Print the given pattern: (Mixture triangle)

        1
        A B
        1 2 3
        A B C D
        1 2 3 4 5

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    short r; cin>>r; cout<<endl;
    for(short i = 1; i<=r; i++){
        for(short j = 1; j<=i; j++){
            if(i%2!=0) cout<<" "<<j;
            else cout<<" "<<char('A'+j-1);
        }cout<<endl;
    }
}