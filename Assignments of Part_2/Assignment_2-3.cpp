// find the output for this code:

#include <iostream>
using namespace std;

int main(){
    int x,y;
    cout<<"Enter the values of x and y : ";
    cin>>x>>y;

    x+=y; 
    x-=y; 
    x%=y; 

    cout<<x; // output will be the value of x , if x is less than y ... otherwise output will be x%y 
}