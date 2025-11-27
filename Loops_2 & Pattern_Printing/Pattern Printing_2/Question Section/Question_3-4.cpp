/*
    Print the given pattern:  (Star Diamond)
                                            here, if n = 4 then the rows should be 2n-1 = 2*4-1 = 7
                    *
                  * * *
                * * * * *
              * * * * * * *
                * * * * * 
                  * * *
                    *  
                    
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    short n; cout<<"Enter the row number: "; cin>>n; cout<<endl;
    short nsp = n-1, nst = 1;
    for(short i = 1; i<=2*n-1; i++){
        // for spaces
        for(short j = 1; j<=nsp; j++) cout<<"  "; 
        if(i<=n-1) nsp--; else nsp++;
        // for stars
        for(short k = 1; k<=nst; k++) cout<<" *"; 
        if(i<=n-1) nst+=2; else nst-=2;  
        cout<<endl;
        
    }
    
}