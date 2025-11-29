/*
        Take 'n' as an input and print:

                   if n=5, then:
                        *
                      * * *
                    *   *   *
                  *     *     *
                * * * * * * * * *
                  *     *     *
                    *   *   *
                      * * *
                        *

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    short n; cout<<"Enter the row number: "; cin>>n; cout<<endl;
    /*
                1 2 3 4 5 6 7 8 9
            1           *            here, if (nth_row and nth_column == 2*n/2), then it prints middle cross stars
            2         * * *          and if (nth_column + nth_row == n+1 , nth_column - nth_row == n-1), it prints the upper part stars
            3       *   *   *        and if (nth_row - nth_column = n-1 , nth_row + nth_column = 3*n-1), it prints the lower part stars 
            4     *     *     *
            5   * * * * * * * * *
            6     *     *     *
            7       *   *   *
            8         * * *
            9           *
    */
    short mid = (2*n/2);
    for(short i = 1; i<=2*n-1; i++){
        for(short j = 1; j<=2*n-1; j++){
            if(i==mid || j==mid || j+i==n+1 || j-i==n-1 || i-j==n-1 || i+j==3*n-1) cout<<" *";
            else cout<<"  ";
        }cout<<endl;
    }

}
