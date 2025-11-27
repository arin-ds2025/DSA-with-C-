/*
    Print the given patterns: (Number Triangle flipped) and (Alphabet Triangle flipped)
                                                
              1                           and                   A
            1 2                                               A B
          1 2 3                                             A B C
        1 2 3 4                                           A B C D

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    short n; cin>>n; cout<<endl;
    // for number triangle flipped
    for(short i = 1; i<=n; i++){
        //for spaces
        for(short j = 1; j<=n-i; j++) cout<<"  ";
        // fot stars
        for(short k = 1; k<=i; k++) cout<<" "<<k; cout<<endl;
    }
    cout<<endl<<endl;

    // for Alphabet triangle flipped
    for(short h = 1; h<=n; h++){
        for(short f = 1; f<=n-h; f++) cout<<"  ";
        for(short v = 1; v<=h; v++) cout<<" "<<char('A'+v-1); cout<<endl;
    }
}