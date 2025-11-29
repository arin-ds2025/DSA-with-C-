/*
    Print the given pattern:  (Number Pyramid)

                1            here after spaces, the rows will end with 2*nth_row(i) - 1 ... let, n = 4
              1 2 3          here, i = 2 then 2*i-1 = 2*2-1 = 3, so (1 2 3)
            1 2 3 4 5        here  i = 3 then 2*i-1 = 2*3-1 = 5, so (1 2 3 4 5)
          1 2 3 4 5 6 7      i is also 4 then it'll be 2*4-1 = 7 , so (1 2 3 4 5 6 7) 

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    short n; cin>>n; cout<<endl;
    for(short i = 1; i<=n; i++){
        for(short j = 1; j<=n-i; j++) cout<<"  ";
        for(short k = 1; k<=2*i-1;k++) cout<<" "<<k; cout<<endl;
    }
}