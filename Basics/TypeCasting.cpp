#include <iostream>
using namespace std;
int main(){
    // float to int:
    float f = 3.33;
    int x = int(f);
    cout<<"float f = "<<f<<endl<<"After type casting to int, x = int(f) = "<<x<<endl<<endl;

    // bool to int:
    bool b = false;
    cout<<"bool b after type casting to int, int(b) = "<<int(b)<<endl;
    cout<<"b+10 = "<<b+10<<endl<<endl;

    // chat to int or int to char:
    char ch = 'A';
    cout<<"After type casting char ch to int, int(ch) = "<<int(ch)<<endl;
    cout<<"After type casting int 97 to char, char(97) = "<<char(97)<<endl;
    cout<<"ch + 100 = "<<ch+100<<endl<<endl; // directly adding integer to char. here, Ascii value of 'A' is 65 will add with 100

}