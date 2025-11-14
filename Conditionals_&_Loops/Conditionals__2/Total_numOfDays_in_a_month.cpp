#include<bits/stdc++.h>
using namespace std;

int main(){
    /*
        Question: Write a program to input month number and print total number of days in month
        -------- using swtich case.
    */

    short x;cout<<"Enter a number between (1-12) : ";cin>>x;
    switch(abs(x)){
        case 1: cout<<"This is January, and its total number of days is: 31"; break;
        case 2: cout<<"This is February, and its total number of days is: 28 (but in leap year it's 29)"; break;
        case 3: cout<<"This is March, and its total number of days is: 31 (19th March, ex's birthday)"; break;
        case 4: cout<<"This is April, and its total number of days is: 30"; break;
        case 5: cout<<"This is May, and its total number of days is: 31"; break;
        case 6: cout<<"This is June, and its total number of days is: 30 (12th June,my birthday)"; break;
        case 7: cout<<"This is July, and its total number of days is: 31"; break;
        case 8: cout<<"This is August, and its total number of days is: 31"; break;
        case 9: cout<<"This is September, and its total number of days is: 30"; break;
        case 10: cout<<"This is October, and its total number of days is: 31"; break;
        case 11: cout<<"This is November, and its total number of days is: 30"; break;
        case 12: cout<<"This is December, and its total number of days is: 31"; break;
        default: cout<<"Invalid input, please give an input between (1-12)..!";
    }
}