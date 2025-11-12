// write a program to check whether a character is an alphabet or not

#include<iostream>
using namespace std;

int main(){
    char ch; cout<<"Enter a character to check it's alphabet or not: ";cin>>ch;
    cout<<endl;

    if(ch>='A' && ch<='Z'){cout<<ch<<" is a Upper Case alphabet"<<endl<<"its ASCII value is: "<<int(ch);}
    else if(ch<='z' && ch>='a'){cout<<ch<<" is a lower case alphabet"<<endl<<"its ASCII value is: "<<int(ch);}
    else{cout<<"Your given input character is not an alphabet";}
}