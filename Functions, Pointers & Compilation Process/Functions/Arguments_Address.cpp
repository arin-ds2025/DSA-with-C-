// we can get the address of arguements by & operator..  &_variable_name

#include<bits/stdc++.h>
using namespace std;

void argAdd(int x, int y){
    cout<<"Inside the argAdd funtion: "<<endl;
    cout<<"x: "<<x<<" and the address of this x is: "<<&x<<endl;
    cout<<"y: "<<y<<" and the address of this y is: "<<&y<<endl;
}

int main(){
    int x = 3, y = 4;
    cout<<"In main funtion: "<<endl;
    cout<<"x: "<<x<<" and the address of this x is: "<<&x<<endl;
    cout<<"y: "<<y<<" and the address of this y is: "<<&y<<endl<<endl;
    argAdd(x,y);
}
