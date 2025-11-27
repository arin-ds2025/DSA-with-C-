/*
    Print the pattern: (Start Bridge)

        * * * * * * *              // we have to do it in four separate parts. 
        * * *   * * *                  
        * *       * *
        *           *
        
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    short n; cout<<"Enter the row number: "; cin>>n; cout<<endl;
    for(short i = 1; i<=2*n-1; i++) cout<<" *"; // for first line or row
    cout<<endl;
    for(short a = 1; a<=n-1; a++){ // for other lines or rows
        // for left flipped star triangle (n+1-i)
        for(short b = 1; b<=n-a; b++) cout<<" *";
        // for middle pyramid shape space (2n-1 for odd number of spaces)
        for(short c = 1; c<=2*a-1; c++) cout<<"  ";
        // for right flipped star triangle (n+1-i)
        for(short d = 1; d<=n-a; d++) cout<<" *";
        cout<<endl;
    }
}