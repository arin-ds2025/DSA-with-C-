/*
    Print the given pattern: (Alphabet Pyramid)

                A
              A B C
            A B C D E
          A B C D E F G

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    short n; cin>>n; cout<<endl;
    for(short a = 1; a<=n; a++){
        for(short b = 1; b<=n-a; b++) cout<<"  ";
        for(short c = 1; c<=2*a-1; c++) cout<<" "<<char('A'+c-1); cout<<endl;
    }
}