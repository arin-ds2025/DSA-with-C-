/*
    Check whether the given string is palindrome or not
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    string st;
    cout<<"Enter your string: "; cin>>st; cout<<endl;
    bool f = 0;
    short s = st.size();

    //for convert all upper case characters into lower case
    for (char& c : st) {
        c = std::tolower(c);
    }

    for(short i = 0; i<s; i++){
        if(st[i]==st[s-i-1]) f = 1;
        else f = 0;
    }

    if(f==1) cout<<"Yes, your given string is palindrome"<<endl;
    else cout<<"No, your given string is not palindrome"<<endl;
}