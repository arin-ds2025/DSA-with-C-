#include<iostream>
using namespace std;

int main(){
    short x,y,z;
    cin>>x>>y>>z;

  
    if(x>y && x>z){cout<<x<<" is the greates number between ("<<x<<") ("<<y<<") ("<<z<<")"<<endl;}
    else if(y>x && y>z){cout<<y<<" is the greates number between ("<<x<<") ("<<y<<") ("<<z<<")"<<endl;}
    else if(z>x && z>y){cout<<z<<" is the greates number between ("<<x<<") ("<<y<<") ("<<z<<")"<<endl;}
    else{cout<<"Please input valid three integers to find the greates number";}
}