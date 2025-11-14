#include<bits/stdc++.h> // we can also use this header to include all dependency libraries 
#include<string>
using namespace std;

int main(){
    /*
        Unary- 1
        Binary- 2
        Ternary- 3

        -----------------------------------------------------------------

        ternary operation : condition ? statement_1(if true) : statement_2(if false)
        ternary operation always calculate right to left
    */

    short x = (5%2==0) ? 0 : 5%2 ,y,marks;
    cout<<"after the expression, x: "<<x<<endl;

    // nested ternary operation:
    cout<<"Enter your marks: ";cin>>marks;
    (marks>=0 && marks<101) ? ((marks>33)?cout<<"Pass":cout<<"Fail") : cout<<"Invalid Input";

    cout<<"Enter a number to check even or odd number : ";
    cin>>y;
    cout<<endl;
    string evnORodd = (y%2==0) ? "Even" : "Odd", show = (y==0) ? "not an even or odd number" : evnORodd ;
    cout<<"Your given input: "<<y<<" is "<<show;
}