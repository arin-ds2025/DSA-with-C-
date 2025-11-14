#include<bits/stdc++.h>
using namespace std;

int main(){
    short x,y; //cout<<"Enter the first number: ";cin>>x;cout<<"Enter the second number: ";cin>>y;
    char ch;
    // cout<<endl<<"Press any key for operation: (+) , (-) , (*) , (/) , (%): ";cin>>ch;cout<<endl;

    // or in shortcut / directly
    cout<<"You have 5 arithmetic operators to do operation between 2 integers..! "<<endl;
    cout<<"Enter your problem, (Example 3+10) : ";cin>>x>>ch>>y;

    switch(ch){
        case '+': cout<<"("<<x<<")"<<" + "<<"("<<y<<")"<<" = "<<x+y;break;
        case '-': cout<<"("<<x<<")"<<" - "<<"("<<y<<")"<<" = "<<x-y;break;
        case '*': cout<<"("<<x<<")"<<" * "<<"("<<y<<")"<<" = "<<x*y;break;
        case '/': cout<<"("<<x<<")"<<" / "<<"("<<y<<")"<<" = "<<float(x)/float(y);break;
        case '%': cout<<"("<<x<<")"<<" % "<<"("<<y<<")"<<" = "<<x%y;break;
        default: cout<<"Invalid key, no operation was programed for this key"<<endl<<"Please try again for those given keys..!";
    }

}