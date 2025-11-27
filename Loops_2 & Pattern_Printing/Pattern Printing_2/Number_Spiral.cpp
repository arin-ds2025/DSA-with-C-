/*
        Print the given pattern: (Number Spiral)

        4 4 4 4 4 4 4
        4 3 3 3 3 3 4
        4 3 2 2 2 3 4
        4 3 2 1 2 3 4
        4 3 2 2 2 3 4
        4 3 3 3 3 3 4
        4 4 4 4 4 4 4

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    short r; cout<<"Enter the row number: "; cin>>r; cout<<endl;
    // first we've try to print:
    /*
            1 2 3 4 

        1   1 1 1 1     each value would be the minimal value of row and column
        2   1 2 2 2     for this, we can directly use inbuild min() function
        3   1 2 3 3 
        4   1 2 3 4
    */
   for(short i = 1; i<=r; i++){
        for(short j = 1; j<=r; j++) cout<<" "<<min(i,j); cout<<endl;
   }cout<<endl<<endl;

   // now,, we have to try this PSeudo variables:
   /*
            1 2 3 4 5 6 7    it will go with 2*n-1,, if n=4 then 2*4-1 = 7
                   (3 2 1) -- instead of 5 6 7,, assumed
        1   1 1 1 1 1 1 1       
        2   1 2 2 2 2 2 1       let, reinitialize in loop, a = row or i, b = column or j
        3   1 2 3 3 3 2 1        so after 4, i + a = 2n ,, a = 2n-i
        4   1 2 3 4 3 2 1        same, after 4,, j + b = 2n,, b = 2n-j
      3 5   1 2 3 3 3 2 1
      2 6   1 2 2 2 2 2 1       after this , each value woulb be the minimum value of row and column. 
      1 7   1 1 1 1 1 1 1
      same, assumed 3 2 1 instead of 5 6 7
   */
    for(short i = 1; i<=2*r-1; i++){
        for(short j = 1; j<=2*r-1; j++){
            short a = i, b = j;
            if(a>r) a = 2*r-i;
            if(b>r) b = 2*r-j;
            cout<<" "<<min(a,b);
        }cout<<endl;
    }cout<<endl<<endl;

    // final changes should be:
    /*
            1 = n-0 
            2 = n-1 or n-2+1
            3 = n-2 or n-3+1
            4 = n-3 or n-4+1
            .
            .
            .
            .
            x = n - x + 1
    */
   for(short i = 1; i<=2*r-1; i++){
        for(short j = 1; j<=2*r-1; j++){
            short m = i, n = j;
            if(m>r) m = 2*r-i; if(n>r) n = 2*r-j;
            short x = min(m,n);
            cout<<" "<<(r - x + 1); 
        }cout<<endl;
   }
}