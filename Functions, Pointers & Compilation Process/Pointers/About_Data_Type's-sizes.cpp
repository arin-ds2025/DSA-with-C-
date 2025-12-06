#include<bits/stdc++.h>
using namespace std;

int main(){
    short sizeOf_int = sizeof(int);
    short sizeOf_long = sizeof(long long);
    short sizeOf_char = sizeof(char);
    short sizeOf_float = sizeof(float);
    short sizeOf_double = sizeof(double);
    short sizeOf_bool = sizeof(bool);
    short sizeOf_short = sizeof(short);
    short sizeOf_string = sizeof(string);

    cout<<"Size of short (Data Type): "<<sizeOf_short<<" bytes or "<<sizeOf_short*8<<" bits"<<endl;
    cout<<"Size of int (Data Type): "<<sizeOf_int<<" bytes or "<<sizeOf_int*8<<" bits"<<endl;
    cout<<"Size of long long (Data Type): "<<sizeOf_long<<" bytes or "<<sizeOf_long*8<<" bits"<<endl;
    cout<<"Size of float (Data Type): "<<sizeOf_float<<" bytes or "<<sizeOf_float*8<<" bits"<<endl;
    cout<<"Size of double (Data Type): "<<sizeOf_double<<" bytes or "<<sizeOf_double*8<<" bits"<<endl;
    cout<<"Size of char (Data Type): "<<sizeOf_char<<" bytes or "<<sizeOf_char*8<<" bits"<<endl;
    cout<<"Size of string (Data Type): "<<sizeOf_string<<" bytes or "<<sizeOf_string*8<<" bits"<<endl;
    cout<<"Size of bool (Data Type): "<<sizeOf_bool<<" bytes or "<<sizeOf_bool*8<<" bits"<<endl<<endl;

    cout<<"So: "<<endl;

    cout<<"(a) short data type can store: "<<pow(2,sizeOf_short*8)<<" integers"<<endl;
    cout<<"(a) int data type can store: "<<pow(2,sizeOf_int*8)<<" integers"<<endl;
    cout<<"(a) long long data type can store: "<<pow(2,sizeOf_long*8)<<" integers"<<endl;
    cout<<"(a) float data type can store: "<<pow(2,sizeOf_float*8)<<" floating numbers"<<endl;
    cout<<"(a) double data type can store: "<<pow(2,sizeOf_double*8)<<" floating numbers"<<endl;
    cout<<"(a) char data type can store: "<<pow(2,sizeOf_char*8)<<" characters"<<endl;
    cout<<"(a) string data type can store: "<<pow(2,sizeOf_string*8)<<" strings"<<endl;
    cout<<"(a) bool data type can store: "<<pow(2,sizeOf_bool*8)<<" boolean values"<<endl;
}
