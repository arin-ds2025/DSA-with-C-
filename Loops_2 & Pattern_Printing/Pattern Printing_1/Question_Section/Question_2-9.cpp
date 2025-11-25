/*
    Print the given pattern:

    1
    2 3
    4 5 6
    7 8 9 10

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    short n; cout<<"Enter the row number: "; cin>>n; cout<<endl;
    int a = 1;
    for(short k = 1; k<=n; k++){
        for(short l = 1; l<=k; l++) {cout<<a++<<" ";}cout<<endl;
    }
}