/*
    Print the given pattern:  (Number Triangle Flipped 2) (alphabet triangle flipped 2)

                1             and                 a
              2 1                               b a
            3 2 1                             c b a
          4 3 2 1                           d c b a

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    short n; cin>>n; cout<<endl;
    // for numbers tirangle flipped 2
    for(short a = 1; a<=n; a++){
        // for spaces
        for(short b = 1; b<=n-a; b++) cout<<"  ";
        // for numbers
        for(short c = 1; c<=a; c++) cout<<" "<<(a-c+1); cout<<endl;
    }
    cout<<endl<<endl;

    // for aphabet triangle flipped 2
    for(short i = 1; i<=n; i++){
        for(short j = 1; j<=n-i; j++) cout<<"  ";
        for(short k = 0; k<i; k++) cout<<" "<<char('a'+i-k-1); cout<<endl;
    }
}