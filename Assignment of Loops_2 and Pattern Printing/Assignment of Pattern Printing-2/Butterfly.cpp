/*
    Take 'n' as an input and print:

          if n=4, then:               if n=3, then:

        *             *               *         *
        * *         * *               * *     * *
        * * *     * * *               * * * * * *
        * * * * * * * *               * * * * * *
        * * * * * * * *               * *     * *
        * * *     * * *               *         *
        * *         * *
        *             *
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    short n; cout<<"Enter the row number: "; cin>>n; cout<<endl;
    /*
              1 2 3 4 5 6 7 8
            1 *             *
            2 * *         * *           we've to do this into two parts:
            3 * * *     * * *           first reverse star bridge and
            4 * * * * * * * *           second normal that star bridge
            5 * * * * * * * *
            6 * * *     * * *
            7 * *         * *
            8 *             *
    */
    // for Upper Bridge
    for(short i = 1; i<=n; i++){
        // for leftside star triangle
        for(short j = 1; j<=i; j++) cout<<" *";

        // for spaces: (we need two triangle spaces shape to get the pyramid shape of spaces) we can use two loops or can use single loop with modified condition
        for(short k = 1; k<=2*(n-i); k++) cout<<"  ";
        // for(short k = 1; k<=n-i; k++) cout<<"  ";

        // for right side star triangle
        for(short l = 1; l<=i; l++) cout<<" *";
        cout<<endl;
    }
    // for lower Bridge
    for(short i = 1; i<=n; i++){
        // for left side star triangle
        for(short j = 1; j<=(n-i)+1; j++) cout<<" *";

        // for middle pyramid shape spaces
        for(short k = 2; k<=2*i-1; k++) cout<<"  ";

        // for right side star triangle
        for(short l = 1; l<=(n-i)+1; l++) cout<<" *";
        cout<<endl;
    }


    cout<<endl<<endl<<endl;


    // in another way:

    // for Upper Bridge
    for(short i = 1; i<=n; i++){
        for(short j = 1; j<=2*n; j++){
            if(j<=i || j>2*n - i) cout<<" *";
            else cout<<"  ";
        }cout<<endl;
    }

    // for lower bridge
    for(short i = 1; i<=n; i++){
        for(short j = 1; j<=n-i+1; j++) cout<<" *";
        for(short k = 2; k<=2*i-1; k++) cout<<"  ";
        for(short l = 1; l<=n-i+1; l++) cout<<" *";
        cout<<endl;
    }
}
