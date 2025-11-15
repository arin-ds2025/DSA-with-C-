/*
    Write a program to count the minimum number of notes(money) in a given amount using the swtich statement
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int amount;
    int x1,x2,x5,x10,x20,x50,x100,x200,x500,x1000;
    x1=x2=x5=x10=x20=x50=x100=x200=x500=x1000=0;
    cout<<"Enter an amount: ";cin>>amount;cout<<endl;
    cout<<"For this ("<<amount<<") amount, minimum notes required: "<<endl;
    
    /*
        for this: ( we've to start with highest note and then it'll be end with lowest note)

        note = amount / (integer form of note); // means how many this note need to complete this amount
        amount %= (integer for of note); // to re initialize the remainder of amount  in amount variable for the next switch statement
        
    */

    switch(amount >= 1000){
        case 1:
            x1000 += amount/1000;
            amount %= 1000 ;
            break;
    }
    switch(amount >= 500){
        case 1:
            x500 += amount/500;
            amount %= 500;
            break;
    }
    switch(amount >= 200){
        case 1:
            x200 += amount/200;
            amount %= 200;
            break;
    }
    switch(amount >= 100){
        case 1:
            x100 += amount/100;
            amount %= 100;
            break;
    }
    switch(amount >= 50){
        case 1:
            x50 += amount/50;
            amount %= 50;
            break;
    }
    switch(amount >= 20){
        case 1:
            x20 += amount/20;
            amount %= 20;
            break;
    }
    switch(amount >= 10){
        case 1:
            x10 += amount/10;
            amount %= 10;
            break;
    }
    switch(amount >= 5){
        case 1:
            x5 += amount/5;
            amount %= 5;
            break;
    }
    switch(amount >= 2){
        case 1:
            x2 += amount/2;
            amount %= 2;
            break;
    }
    switch(amount >= 1){
        case 1:
            x1 += amount;
            amount %= 1;
            break;
    }

    cout<<"Notes of 1000 are: "<<x1000<<endl;
    cout<<"Notes of 500 are: "<<x500<<endl;
    cout<<"Notes of 200 are: "<<x200<<endl;
    cout<<"Notes of 100 are: "<<x100<<endl;
    cout<<"Notes of 50 are: "<<x50<<endl;
    cout<<"Notes of 20 are: "<<x20<<endl;
    cout<<"Notes of 10 are: "<<x10<<endl;
    cout<<"Notes of 5 are: "<<x5<<endl;
    cout<<"Notes of 2 are: "<<x2<<endl;
    cout<<"Notes of 1 are: "<<x1<<endl;
}
