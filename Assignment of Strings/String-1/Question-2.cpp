/*
    Input a string of length n and count all the consonants in the given string
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    string cnsnt = "aeiou";
    string st;
    cout<<"Enter your string: "; cin>>st; cout<<endl;
    short count = 0;

    //for convert all upper case characters into lower case
    for (char& c : st) {
        c = std::tolower(c);
    }

    for(short i = 0; i<st.size(); i++){
      if(st[i]!='a' and st[i]!='e' and st[i]!='i' and st[i]!='o' and st[i]!='u') count++;
    }

    cout<<"There are ("<<count<<") number of consonants in the given string"<<endl;
}