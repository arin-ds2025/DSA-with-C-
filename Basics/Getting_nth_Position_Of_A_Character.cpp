# include <iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character to know its nth position between A-Z or a-z : ";
    cin>>ch;
    if(ch>='A' && ch<='Z'){
        cout<<"The position of character "<<ch<<" between A-Z is : "<<(int(ch)-int('A')+1)<<endl;
    }else if (ch>='a' && ch<='z') {
        cout<<"The position of character "<<ch<<" between A-Z is : "<<(int(ch)-int('a')+1)<<endl;
    }else{
        cout<<"Invalid Input..! Please enter an alphabetic character."<<endl;
    }
}