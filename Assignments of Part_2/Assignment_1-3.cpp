// How much space does following data types take?

#include <iostream>
#include <string> 
using namespace std;

int main(){
    // we can use sizeof() operator to find the size of data types (1 byte = 8 bits)
    cout<<"Size of char: "<<sizeof(char)<<" bytes"<<" and in bits : "<<sizeof(char)*8<<endl;
    cout<<"Size of int: "<<sizeof(int)<<" bytes"<<" and in bits : "<<sizeof(int)*8<<endl;
    cout<<"Size of float: "<<sizeof(float)<<" bytes"<<" and in bits : "<<sizeof(float)*8<<endl;
    cout<<"Size of double: "<<sizeof(double)<<" bytes"<<" and in bits : "<<sizeof(double)*8<<endl;
    cout<<"Size of bool: "<<sizeof(bool)<<" bytes"<<" and in bits : "<<sizeof(bool)*8<<endl;
    cout<<"Size of short: "<<sizeof(short)<<" bytes"<<" and in bits : "<<sizeof(short)*8<<endl;
    cout<<"Size of long: "<<sizeof(long)<<" bytes"<<" and in bits : "<<sizeof(long)*8<<endl;
    cout<<"Size of long long: "<<sizeof(long long)<<" bytes"<<" and in bits : "<<sizeof(long long)*8<<endl;
    cout<<"Size of String: "<<sizeof(string)<<" bytes"<<" and in bits : "<<sizeof(string)*8<<endl;
    return 0;
}