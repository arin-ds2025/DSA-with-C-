#include<iostream>
using namespace std;

int main(){
    int ascii;cout<<"Enter the ASCII value to check if it's an alphabet or not: ";cin>>ascii;
    cout<<endl;

    if(char(ascii)>='A' && char(ascii)<='Z'){
        cout<<"The ASCII value ("<<ascii<<") has a Upper Case alphabet"<<endl<<"It's: "<<char(ascii);
    }else if(char(ascii)<='z' && char(ascii)>='a'){
        cout<<"The ASCII value ("<<ascii<<") has a lower case alphabet"<<endl<<"It's: "<<char(ascii);
    }else{
        cout<<"This ASCII value ("<<ascii<<") doesn't contain any alphabet";
    }
}