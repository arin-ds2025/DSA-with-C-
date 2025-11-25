/*
    Print the given patterns (Star Plus with spaces and hashes) 

            *                             
            *
        * * * * *
            *
            * 
            
         and ,

        # # * # #
        # # * # #
        * * * * *
        # # * # #
        # # * # #
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    short n; cout<<"Enter the row number : "; cin>>n; cout<<endl;
    if(n==1) cout<<"Please try again and enter a bigger odd number..!";
    else if(n%2==0) cout<<"It's an even number , please try again and give an odd number to print the pattern of Star Plus..!";
    else {
        /*
            printing stars of row num and column will be the (n/2)+1 nth row and column number (middile)
        */

        // with spaces
        short mid = (n/2)+1;
        for(short i = 1; i<=n; i++){
            for(short j = 1; j<=n; j++){
                if(i==mid or j==mid) cout<<" * ";
                else cout<<"   ";
            }cout<<endl;
        }
        cout<<endl<<endl;

        for(short k = 1; k<=n; k++){
            for(short l = 1; l<=n; l++){
                if(k==mid || l==mid) cout<<" * ";
                else cout<<" # ";
            }cout<<endl;
        }
    }
}