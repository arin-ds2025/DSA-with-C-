/*
        Print the given pattern:
        
            A B C D E F G 
            A B C   E F G
            A B       F G
            A           A

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    short n; cin>>n; cout<<endl;
    // for first line or row
    for(short i = 1; i<=2*n-1; i++) cout<<" "<<char('A'+i-1); cout<<endl;

    // for other lines or rows
    for(short a = 1; a<=n-1; a++){
        // for left side triangle
        for(short b = 1; b<=n-a; b++) cout<<" "<<char('A'+b-1);
        // for middle pyramid shape spaces
        for(short c = 1; c<=2*a-1; c++) cout<<"  ";
        //for right side triangle
        for(short d = 1; d<=n-a; d++) cout<<" "<<char('A'+n+a+d-2); cout<<endl;
       
    }
}