#include<bits/stdc++.h>
using namespace std;

int main(){
    short x;cout<<"Enter a number between (1-12) : ";cin>>x;
    // 1,3,5,7,  8,10,12 -> 31 days of months
    // 4,6,9,11 -> 30 days of months
    // 2 -> 28 days of months

    // this is kinda if-else type:
    switch(x==0 || x<0 || x>12) {case 1: cout<<"Invalid input. please give an input between (1-12)..!"; break;}
    switch((x<8 && x%2!=0 && x>0) || (x%2==0 && x>7 && x>0)) {case 1: cout<<"This is 31 days of months"; break;}
    switch(x==4 || x==6 || x ==9 || x==11) {case 1: cout<<"This is 30 days of months"; break;}
    switch(x) {case 2: cout<<"This is 28 days of month (February)"; break;}
   
    return 0;
}