/*
    Print the pattern:

            1
          1 2
        1 2 3
      1 2 3 4

*/

#include<bits/stdc++.h>
using namespace std;

int main (){
    short n; cout<<"Enter the row number: "; cin>>n; cout<<endl;
    for(short i = 1; i<=n; i++){
        // for spaces
        for(short j = 1; j<=n-i; j++){
            cout<<"  ";
        }

        // for numbers
        for(short k = 1; k<=i; k++){
            cout<<" "<<k;
        }cout<<endl;
    }
    cout<<endl<<endl;

    // in another way but not so reliable, only for stars:
    for(short m = 1; m<=n; m++){
        for(short t = 1; t<=n; t++){
            if((m+t) >= n+1) cout<<" *";
            else cout<<"  ";
        }cout<<endl;
    }
}