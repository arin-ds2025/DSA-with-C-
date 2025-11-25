#include<bits/stdc++.h>
using namespace std;

int main(){
    // for solid rectangle:
    short r,c; cout<<"Enter number of rows: "; cin>>r; cout<<"Enter number of columns: "; cin>>c; cout<<endl;
    for(short i=1; i<=r; i++){ // the outer loop is for rows
        for(short j=1; j<=c; j++){ // the inner loop is for columns
            cout<<" * ";
        }cout<<endl;
    }

    // for solid square rectangle:
    short sOs; cout<<"Enter size of the solid square: "; cin>>sOs; cout<<endl;
    for(short i=1; i<=sOs;i++){for(short j=1; j<=sOs; j++) cout<<" # "; cout<<endl;}
}