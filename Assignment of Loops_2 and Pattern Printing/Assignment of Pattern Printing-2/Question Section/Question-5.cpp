/*
    Take 'n' as an input and print:

        if n = 4:
        * * * * * * *
        * * *   * * *
        * *       * *
        *           *
        * *       * *
        * * *   * * *
        * * * * * * *

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    short n; cout<<"Enter the row number: "; cin>>n; cout<<endl;

    // for upper part
    for(short i = 1; i<=2*n-1; i++)cout<<" *"; cout<<endl;
    for(short i = 1; i<=n-1; i++){
        // for left star triangle flipped
        for(short j = 1; j<=n-i; j++) cout<<" *";

        //for pyramid shape spaces
        for(short k = 1; k<=2*i-1; k++) cout<<"  ";

        // for right star triangle flipped
        for(short l = 1; l<=n-i; l++) cout<<" *";

        cout<<endl;
    }
    //for lower part
    for(short i = 2; i<=n-1; i++){
        // for left side star triangle
        for(short j = 1; j<=i; j++) cout<<" *";

        // for middle spaces (inverse pyramid condition == 2*triangle shape condition)
        for(short k = 1; k<=2*(n-i)-1; k++) cout<<"  ";

        // for right side star triangle
        for(short l = 1; l<=i; l++) cout<<" *";

        cout<<endl;
    }
    for(short i = 1; i<=2*n-1; i++)cout<<" *"; cout<<endl;
}
