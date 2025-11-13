#include<iostream>
using namespace std;

int main(){ // we can also use void, cause we don't need anything to return us from this code.but here we need int main(), cause it returns something
    short a,b,c;cin>>a>>b>>c;
    if((a+b>c) && (a+c>b) && (b+c>a)) cout<<"They can be sides of a triangle";
    else cout<<"They can't be sides of a triangle"; // don't need brackets if we can express the code in one line
    
}