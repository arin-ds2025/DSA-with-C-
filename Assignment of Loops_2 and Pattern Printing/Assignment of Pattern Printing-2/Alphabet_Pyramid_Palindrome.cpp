/*
    Print the given pattern: (Alphabet Pyramid Palindrome)

                A
              B A B
            C B A B C
          D C B A B C D

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    short n; cin>>n; cout<<endl;
    /*
          1 2 3 4 5 6 7
          
      1         A
      2       B A B
      3     C B A B C
      4   D C B A B C D


        we've to separate this palindrome into to parts

                A            and                 
              B A                              A B
            C B A                              A B C
          D C B A                              A B C D
        for this, loops starts with           for this, loop starts with 1 and ends with <=i-1
        i and ends with >=1                   
    */
    for(short i = 1; i<=n; i++){
        for(short j = 1; j<=n-i; j++) cout<<"  ";
        for(short k = i; k>=1; k--) cout<<" "<<char('A'+k-1);
        for(short l = 1; l<i; l++) cout<<" "<<char('A'+l); cout<<endl;
    }
}