#include <iostream>
#include <string> // to use string data type and take input of string type

using namespace std;
int main(){

    // cout<<"Enter a number: ";
    // int num;
    // cin>>num;
    // cout<<"The square of "<<num<<" is: "<<num*num<<endl;
    // cout<<endl;

    // we can take multiple inputs in single line also
    // int dividend, divisor;
    // cout<<"Enter the values of dividend and divisor at a time : ";
    // cin>>dividend>>divisor; // suppose user enters 10 3 .. here we've to use a space to separate the inputs
    // cout<<"The quotent is: "<<dividend/divisor<<endl;
    // cout<<"The remainder is: "<<dividend%divisor<<endl;

    // a simple task:

    string name;
    int password;
    int nameAttempts = 0, passwordAttempts = 0;
    const int MAX_ATTEMPTS = 3;
    
    cout << "Enter Your Full Name: ";
    getline(cin, name);  // Fixed: reads full name with spaces
    
    cout << "Enter Your Password (numeric only): ";
    cin >> password;
    
    // Validate name first
    while (name != "Arin Ahmed" && nameAttempts < MAX_ATTEMPTS) {
        nameAttempts++;
        if(nameAttempts==3){
            cout<<"You've lost 2 chances for name input.. try later,,, bye, Mc..!"<<endl;
            break;
        }
        cout << "Access Denied. Invalid Name! Try Again" << endl;
        cout << "Enter Your Full Name Again: ";
        cin.ignore();  // Clear the newline
        getline(cin, name);
    }
    
    // If name is still wrong after attempts
    if (name != "Arin Ahmed") {
        cout << "Access Denied. Invalid Name again! Go to hell..LoL! You've lost your chances" << endl;
        return 0;
    }
    
    // Validate password
    while (password != 2580 && passwordAttempts < MAX_ATTEMPTS) {
        passwordAttempts++;
        if(passwordAttempts==3){
            cout<<"You've lost 2 chances for password input.. try later,,, bye, Mc..!"<<endl;
            break;
        }
        cout << "Access Denied. Invalid Password! Try again!" << endl;
        cout << "Enter Your Password Again: ";
        cin >> password;
    }
    
    // Final check
    if (password == 2580) {
        cout << "Access Granted. Welcome " << name << "!" << endl;
        cout << "Have a nice day..! Otherwise, go to hell..LoL!" << endl;
    } else {
        cout << "Access Denied. Invalid Password again! Go to hell..LoL! You've lost your chances" << endl;
    }
    
    return 0;

}