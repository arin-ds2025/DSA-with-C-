#include<iostream>
using namespace std;

int main(){
    char ch;cout<<"Enter a character to check if it's vowel or consonant: ";cin>>ch;cout<<endl;
    if((ch<='Z' && ch>='A') || (ch>='a' && ch<='z')){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            cout<<"Your given input: "<<ch<<" is a lower case vowel";
        }else if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
            cout<<"Your given input: "<<ch<<" is an Upper Case vowel";
        }else{
            if(ch<='Z' && ch>='A'){cout<<"Your given input: "<<ch<<" is an Upper Case consonant";}
            else if(ch>='a' && ch<='z'){cout<<"Your given input: "<<ch<<" is a lower case consonant";}
        }
    }else{cout<<"Your given input: "<<ch<<" is not an alphabet";}
}