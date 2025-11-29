/*
    Take 'n' as an input and print these patterns:
    
         if n=5, then:      or      if n=4, then:      and       if n=5, then:  or   n=4, then:

               1                          1                       1       1           1     1
             2   2                      2   2                      2     2             2   2
           3       3                  3       3                     3   3               3 3
         4           4              4           4                    4 4                 4
       5               5                                              5
                                              
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    short n;  cout<<"Enter the row number: "; cin>>n; cout<<endl;
    // for /\ shape:
    /*
                1 2 3 4 5 6 7 8 9
            1           1                here, if nth_row + nth_column == n+1 and 
            2         2   2              nth_column - nth_row == n-1 then it prints stars, else spaces
            3       3       3
            4     4           4
            5   5               5 
    */
    for(short i = 1; i<=n; i++){
        for(short j = 1; j<=2*n-1; j++){
            if(j+i==n+1 or j-i==n-1) cout<<" "<<i;
            else cout<<"  ";
        }cout<<endl;
    }

    cout<<endl<<endl;

    // for V shape:
    /*
                1 2 3 4 5 6 7 8 9
            1   1               1         here if nth_column == nth_row and nth_column == 2*n-nth_row
            2     2           2           then it prints numbers(i), else it prints spaces
            3       3       3
            4         4   4 
            5           5

    */
   for(short i = 1; i<=n; i++){
        for(short j = 1; j<=2*n-1; j++){
            if(j==i || j==2*n-i) cout<<" "<<i;
            else cout<<"  ";
        }cout<<endl;
    }

}
