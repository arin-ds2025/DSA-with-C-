#include <iostream>

using namespace std;

int main(){
    //int data type
    int a = 10;
    cout<< a/2<<endl;
    a= 12;
    cout<<a/4<<endl;
    a+=10;
    cout<<a/11<<endl;
    cout<<"With pre incriment: "<<++a<<endl<<"With post decrement: "<<a--<<endl<<"After post decrement: "<<a<<endl;
    cout<<endl<<endl;

    // float data type
    float b = 6.6,c;
    c = b/2;
    cout<<c<<endl;
    cout<<5/2.0<<endl<<5.0/2<<endl;
    cout<< 5.5*2.3<<endl;
    cout<<endl;

    // char data type
    char d = 'A'; 
    cout<<d<<endl;
    cout<<char(d+1)<<endl; // here, chat(d+1) converts the integer value back to char as Ascii value of 'A' is 65 and 65+1 = 66 which is 'B'
    cout<<endl;

    // boolean data type
    bool t = true;
    bool f = false;
    cout<<t<<endl<<f<<endl; // here, true = 1 and false = 0
    cout<<bool(5>4)<<endl<<bool(3<1)<<endl;
    cout<<"7 >= 4 : "<<(7 >= 4)<<endl<<"3 != 3.0 : "<<(3 != 3.0)<<endl; // we can compare without using bool() funtion
    cout<<endl;

    // String data type
    string str = "Arin Ahmed";
    cout<<str<<endl<<"A software engineer"<<endl;
}    