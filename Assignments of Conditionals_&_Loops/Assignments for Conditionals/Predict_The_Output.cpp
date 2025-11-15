#include<iostream>
using namespace std;

int main(){
    int a = 500, b = 300, c;
    if(a<500)
        b = 200; // there are no brackets, so only this line only consider as in if statement. not the next line
        c = a%b; // this line and the next line are not the part of if statement, so the value of b doesn't change. 
        cout<<"The value of b: "<<b<<" and c: "<<c<<endl;  // cause the if condition doesn't hit. so the value of b doesn't change

    cout<<endl;
    
    // next prediction:
    int x = 5, y , z;
    y = x = 15;
    z = x < 15;
    cout<<"x: "<<x<<" and y: "<<y<<" and z: "<<z<<endl<<endl;

    // next prediction;
    short test = 0;
    cout<<"First Character: "<<'1'<<endl;
    cout<<"Second Character: "<<(test?3:'1')<<endl; // test = 0 so it hits the false statement, and here will print the ascii value of '1'
    // cause in ternary operator, for both true and false statement, there should be same data type,, so '1' will convert its ascii form
    cout<<endl;

    

    return 0;
}