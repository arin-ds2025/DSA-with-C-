/*
    Print the pattern:  (Number Pyramid Palindrom)

            1
          1 2 1
        1 2 3 2 1
      1 2 3 4 3 2 1

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    short n; cout<<"Enter the row number: "; cin>>n; cout<<endl;
    /*
           1 2 3 4 5 6 7    
        1        1
        2      1 2 1
        3    1 2 3 2 1
        4  1 2 3 4 3 2 1

        only righ part:
             1 2 3
          1  1
          2  2 1
          3  3 2 1
            
    */
    // only print the right part of the triangle without flip(or without spaces)
    for(short i =1; i<=n; i++){
        for(short j = i; j>=1; j--) cout<<" "<<j; cout<<endl;
    }cout<<endl<<endl;


    for(short i = 1; i<=n; i++){
        // for spaces
        for(short j = 1; j<=n-i; j++) cout<<"  ";
        // for the flipped right side triangle
        for(short k = 1; k<=i; k++) cout<<" "<<k;
        // for the left side triangle
        for(short l =i-1; l>=1; l--)cout<<" "<<l; // i-1 cause it should be start from second row
        cout<<endl;
    }
}