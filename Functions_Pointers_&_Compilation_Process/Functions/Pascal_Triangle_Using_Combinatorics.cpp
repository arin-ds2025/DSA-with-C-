/*
            Pascal Triangle:
                    1
                  1   1
                1   2   1
              1   3   3   1
            1   4   6   4   1

*/

#include<bits/stdc++.h>
using namespace std;

int fact(int f){
    int fl = 1;
    for(short i = 2; i<=f; i++) fl*=i; return fl;
}

int combination(int n, int r){
    int ncr = fact(n)/(fact(r)*fact(n-r));
    return ncr;
}

void pascalTriangle(int x){
    for(short i = 0; i<=x; i++){
        for(short k = 1; k<=x-i; k++) cout<<"  ";
        for(short j = 0; j<=i; j++){
            cout<<"  "<<combination(i,j)<<" ";
        }
        cout<<endl;
    }
}

int main(){
    /*
                    1  2  3  4  5  6

               1    1                    here, (nth_row)! / ((nth_column)! * (nth_row - nth_column)!) = that nth_row and nth_column digit
               2    1  1
               3    1  2  1
               4    1  3  3  1
               5    1  4  6  4  1
               6    1  5  10 10 5  1


    */

    short n; cout<<"Enter the row number: "; cin>>n; cout<<endl;
    pascalTriangle(n);
}
