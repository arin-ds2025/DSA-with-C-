/*
    Take a,b,c as input and print the following patterns: (using without and with funtion)
    a=3 , b=4, c=5
    *
    * *
    * * *
    *
    * *
    * * *
    * * * *
    *
    * *
    * * *
    * * * *
    * * * * *
*/

#include<bits/stdc++.h>
using namespace std;

/*
        function protoype:
        return_type function_name(parameter_list){
            //function body
        }
*/

// outer user defined function
void starTriangle(short n){
    for(short i = 1; i<=n; i++){for(short j = 1; j<=i; j++) cout<<" *"; cout<<endl;}
}

// main function
int main(){
    short a = 3, b = 4, c = 5;
    // without function
    cout<<"Without function: "<<endl;
    for(short i = 1; i<=a; i++){
        {for(short j = 1; j<=i; j++) cout<<" *"; cout<<endl;}
    }
    for(short i = 1; i<=b; i++){
        {for(short j = 1; j<=i; j++) cout<<" *"; cout<<endl;}
    }
    for(short i = 1; i<=c; i++){
        {for(short j = 1; j<=i; j++) cout<<" *"; cout<<endl;}
    }

    cout<<endl<<endl<<endl;

    //with function
    cout<<"With function: "<<endl;
    starTriangle(a); // we can call function with variable
    starTriangle(b);
    starTriangle(c);
    starTriangle(6); // we can also call function with any other value
}
