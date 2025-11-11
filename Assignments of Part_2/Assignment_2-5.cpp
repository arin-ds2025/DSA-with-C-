// WAP to find the difference between ASCII of two characters , take them as input.

#include <iostream>
using namespace std;   

int main(){
    char ch1,ch2;
    cout<<"Enter two characters: "; cin>>ch1>>ch2;
   // short diff = abs(int(ch1) - int(ch2)); // abs() to avoid negative difference

   // or, Without using abs() funtion
    short diff;
    if(int(ch1) > int(ch2)){diff =int(ch1) - int(ch2); }
    else {diff = int(ch2) - int(ch1); }
    cout<<"Difference between ASCII of "<<ch1<<" and "<<ch2<<" is: "<<diff<<endl;
    return 0;
}