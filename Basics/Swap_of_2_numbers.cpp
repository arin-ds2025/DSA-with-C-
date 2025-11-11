#include <iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    cout<<endl;

    cout<<"Before swaping num1 is : "<<num1<<endl<<"Before swaping num2 is : "<<num2<<endl;
    cout<<endl;

    int temp;
    temp=num1;
    num1=num2;
    num2=temp;
    cout<<"After swaping num1 is : "<<num1<<endl<<"After swaping num2 is : "<<num2<<endl;
    cout<<endl;

}