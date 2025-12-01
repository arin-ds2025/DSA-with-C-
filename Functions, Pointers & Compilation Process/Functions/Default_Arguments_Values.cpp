#include<bits/stdc++.h>
using namespace std;

void print(short a = 7, float b = 7.33f){cout<<a<<" "<<b<<endl;} // Default Argument Values

//void print2(short x = 7, short y) {cout<<x<<" "<<y<<endl;} // here only the last parameter can not have default value
// so it throws error cause if want to give default value to any parameter, all the parameters to its right must also have default values

int main(){
    print(); // prints 7 7.33
    print(5); // prints 5 7.33, cause a takes user defined value and b takes default value
    print(4,6.021f); // prints 4 6.021, cause both a and b take user defined values and those default values are ignored

    cout<<endl<<endl;

   // print2(7); // it throws error as y has no default value
   // print2(4,6); // doesn't matter what values x and y take, it throws error only when y has no user defined value
}

