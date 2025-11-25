/*
    Print the pattern:  (Star Triangle flipped)
    
                *
              * *
            * * *  
          * * * *
          
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    short n; cout<<"Enter the row number: "; cin>>n; cout<<endl;
    /*
        assume the pattern is:
            we have to use 2 nested loops,, one for print spaces and other for stars
          1 2 3 4       for spaces:
        1       *        here in each row,, the number of rows + the number of columns = n+1 (n is the given input).. but I use only 1 , cause I don't need any space at the last row
        2     * *        so the number of spaces or how many columns print in each row is (n - i), ( i is the row number)
        3   * * *        
        4 * * * *        for stars: it's as usual 
    */
    for(short i = 1; i<=n; i++){
        // for spaces
        for(short j = 1; j<=n-i; j++){ // if I use j<=n+1-i, it'll also work.. but we don't need an extra space at last line. so that I removed +1
            cout<<"  ";
        }
        // for stars
        for(short k = 1; k<=i; k++) cout<<" *"; cout<<endl;
    }
    cout<<endl<<endl;

    // in another way but not so reliable, only for print stars:
    for(short m = 1; m<=n; m++){
        for(short t = 1; t<=n; t++){
            if((m+t) >= n+1) cout<<" *";
            else cout<<"  ";
        }cout<<endl;
}