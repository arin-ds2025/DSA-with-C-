/*
    Print the pattern: (Stars Cross)
      *       *
        *   *
          *
        *   *
      *       *  
     
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    short n; cout<<"Enter the row numner: "; cin>>n; cout<<endl;

    /*
      1 2 3 4 5         for left to right stars, the column number and the row number is same (i==j) 
    1 *       *         for right to left stars, the addition of column and row = given row num + 1 (i+j == n+1)
    2   *   *
    3     *
    4   *   *
    5 *       *  
    
    
    */

    if(n==1) cout<<"Please Enter a bigger odd integer..!"; else if(n%2==0) cout<<"Your given integer was even.! Please try again and Enter an odd integer;";
    else{
        // for left to right stars
        for(short i = 1; i<=n; i++){
            for (short j = 1; j<=n; j++){
                if (i==j) cout<<" * ";
                else cout<<"  ";
            }cout<<endl;
        } 
        cout<<endl<<endl;

        // for right to left stars
        for(short l = 1; l<=n; l++){
            for(short m = 1; m<=n; m++){
                if(l+m == n+1) cout<<" * ";
                else cout<<"  ";
            }cout<<endl;
        }
        cout<<endl<<endl;

        // for both of together as a Star cross pattern:
        for(short k = 1; k<=n; k++){
            for(short p = 1; p<=n; p++){
                if((k+p == n+1) or (k==p)) cout<<"*";
                else cout<<" ";
            }cout<<endl;
        }
    }
    
    
}