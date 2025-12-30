/*
    Input a string of length less than 10 and convert it into integer without using built-in function.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    string st; cout<<"Enter your string: "; cin>>st; cout<<endl;
    short s = st.size();

    if(s>10) cout<<"Enter a string, has 10 length"<<endl;
    else{
        int num = 0;  // we need an integer variable
        
        cout<<"The string is: "<<st<<" "<<typeid(st).name()<<endl;  // print the string
        for(short i = 0; i<s; i++){
            // Convert char digit to actual digit value: '0' to '9' → 0 to 9
            short digit = st[i] - '0';
            num = num*10 + digit;  // build the number
        }
        cout<<"After conversion, The integer is: "<<num<<" "<<typeid(num).name()<<endl;  // print the integer
    }
}