/*
    Find the element x in the array. take array and x as input
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    short x; cout<<"Enter a number: "; cin>>x;
    int l_s[] = {1,2,3,4,5,6,7,8,9,0,11,12,10,15,19,24},temp = 0;
    bool flag = 0;
    for(short i = 0; i<std::size(l_s); i++){
        if(x==l_s[i]){
            flag = 1;
            temp = i;
            break;
        }
    }

    if(flag==1) cout<<"Yes, your given input x ("<<x<<") is in that array at "<<temp<<" no. index";
    else cout<<"Sorry, your given input x ("<<x<<") is not in that array";
}