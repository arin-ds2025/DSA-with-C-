/*
    Count the number of elements strictly greater than x in the given array
*/

#include<bits/stdc++.h>
using namespace std;

void greaterCount(int a[], int x){
    short count = 0;
    bool flag = 0;
    for(short i = 0; i<x; i++){
        if(a[i]>x){
            count++;
            flag = 1;
        }
    }
    if(flag==1) cout<<"You've "<<count<<" elements in that array, who are strictly greater than "<<x<<endl;
    else cout<<"Sorry, there are no elements in that array , who are greater than "<<x<<endl;
}

void displayArr(int a[], int x){
    cout<<"Your created array is: ";
    for(short i = 0; i<x; i++) cout<<a[i]<<" "; cout<<endl<<endl;
}

void createArr(int a[], int x){
    cout<<"Insert elements of array: ";
    for(short i = 0; i<x; i++) cin>>a[i]; cout<<endl<<endl;
    displayArr(a,x);
    greaterCount(a,x);
}

int main(){
    // mainly we've to find out those elements of array who greater than the give size of array

    int s, arr[s]; cout<<"Enter the array size: "; cin>>s; cout<<endl;
    createArr(arr,s);
}