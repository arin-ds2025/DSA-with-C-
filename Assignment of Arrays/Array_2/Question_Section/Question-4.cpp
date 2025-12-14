/*
    Find the difference between the sum of the elements at even indices to the sum of elements at odd indices
*/

#include<bits/stdc++.h>
using namespace std;

void evaluatedifference(int a[], int x){
    short sumE = 0, sumO = 0; 
    cout<<"Even elements are: ";
    for(short i = 0; i<x; i++){
        if(a[i]%2==0){
            sumE+=a[i];
            cout<<a[i]<<" ";
        }    
    } cout<<endl;
    cout<<"Odd elements are: ";
    for(short i = 0; i<x; i++){
        if(a[i]%2!=0){
            sumO+=a[i];
            cout<<a[i]<<" ";
        }    
    }cout<<endl;
    cout<<"The difference is ("<<sumE<<"-"<<sumO<<"): "<<sumE-sumO<<endl<<endl;
}

void displayArr(int a[], int x){
    cout<<"Your created array is: ";
    for(short i = 0; i<x; i++) cout<<a[i]<<" "; cout<<endl<<endl;
}

void createArr(int a[], int x){
    cout<<"Insert elements of array: ";
    for(short i = 0; i<x; i++) cin>>a[i]; cout<<endl<<endl;
    displayArr(a,x);
    evaluatedifference(a,x);
}

int main(){
    // mainly we've to find the difference between the sum of elements of even indices and odd indices

    int x, arr[x]; cout<<"Enter the array size: "; cin>>x; cout<<endl;
    createArr(arr,x);
}