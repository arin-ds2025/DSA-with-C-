#include <iostream> // this line is used to include input-output stream library, means to use cout and cin funtions

using namespace std; // this line is used to avoid using std:: before every cout and cin.. std means standard

/*
if we don't use 'using namespace std;' then we have to write std:: before every cout and cin like this:
int main(){
    std::cout << "Hello, World!" << std::endl;
    // return 0; // it's optional in main function
}
*/

int main(){
    cout << "Hello, Chutiya..! ";  // << if I use << endl ,it means end of line and next output will be in new line
    cout << "Welcome to C++ programming..!" << endl;
    cout<<"the value of 3+4 is: "<< 3+4 << "\n"; // \n is also used for new line
    cout<<"the value of 5*6 is: "<< 5*6 << "\n";
    cout<<"My self Arin Ahmed";
    cout<<endl;
    cout<<"I am a Diploma Student \n";
    cout<<"I just started learning C++ programming language. \n";
    cout<<"This is my first program in C++ language."<<endl<<"I'm enjoying it very much.";
    cout<<"\n\tThank you.!"<<endl; // \t is used for tab space
    cout<<"Hello PW\nHello CW \n";
    cout<<endl;

    int x = 10;
    cout<<"x = "<<x<<endl<<"(x==7) : "<<(x==7)<<endl<<"(x=12) : "<<(x=12)<<endl;
    /* 
        here (x==7) is a comparison operator which checks whether x is equal to 7 or not and returns boolean value
        and (x=12) is an assignment operator which assigns the value 12 to x and returns the assigned value
    */


    /*
        this is a multi line comment in C++
    */

    // return 0; // it's optional in main function
}