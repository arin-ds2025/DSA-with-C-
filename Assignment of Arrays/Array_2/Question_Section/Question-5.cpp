/*
    Given an array of integers, change the value of all odd indexed elements to its second multiple and 
    increment all even indexed value by 10
*/

#include<bits/stdc++.h>
using namespace std;

void displayArr(int a[], int x){
    cout<<"Your created array is: ";
    for(short i = 0; i<x; i++) cout<<a[i]<<" "; cout<<endl<<endl;
}

void afterChanges(int n[], int x){
    cout<<"For even elements (increment by 10): ";
    for(short i = 0; i<x; i++){
        if(n[i]%2==0){
            cout<<(n[i]+=10)<<" ";
        }
    }cout<<endl;

    cout<<"For Odd elements (multiply with 2): ";
    for(short i = 0; i<x; i++){
        if(n[i]%2!=0){
            cout<<(n[i]*=2)<<" ";
        }
    }cout<<endl;
    
    cout<<"So after all changes, ";
    displayArr(n,x);
}

void createArr(int a[], int x){
    cout<<"Insert elements of array: ";
    for(short i = 0; i<x; i++) cin>>a[i]; cout<<endl<<endl;
    displayArr(a,x);
    afterChanges(a,x);
}

int main(){
    // mainly we've multiply the odd indexed elements with 2 and increment the even indexed element by 10

    int s, arr[s]; cout<<"Enter the array size: "; cin>>s; cout<<endl;
    createArr(arr,s);
}