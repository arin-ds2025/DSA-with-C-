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

int pascalOpt(int x){
    for(int i = 0; i<=x; i++){
        // for spaces:
        for(int j = 1; j<=x-i; j++)cout<<"  ";

        // for pascal number triangle
        int current = 1;
        for(int k=0; k<=i;k++){
            cout<<"  "<<current<<" ";
            current = current * (i - k) / (k + 1);
        }

        cout<<endl;
    }
}

int main(){
    /*
        formula: nCr+1 = (n-r)/(r+1) * nCr

        here, we don't need to use loops for get factorial or something else for combination
        we use just current value and next value
    */
    int n ; cout<<"Enter the row number: "; cin>>n; cout<<endl;
    pascalOpt(n);

}
