/*
    Check if the given array is sorted or not
*/

#include<bits/stdc++.h>
using namespace std;

void isSorted(int a[], int x){
    bool flag = 0;
    for(short i = 0; i<x; i++){
        short j = i;
        j++;
        if(j==x) break;
        if(a[i]>a[j]) {flag=0; break;}
        if(a[i]<a[j]) flag = 1;
    }
    if(flag==1) cout<<"Yes, your given array is sorted..!"<<endl<<endl;
    else cout<<"No, your given array is not sorted"<<endl<<endl;
}

void displayArr(int a[], int x){
    cout<<"Your created array is: ";
    for(short i = 0; i<x; i++) cout<<a[i]<<" "; cout<<endl<<endl;
}

void createArr(int a[], int x){
    cout<<"Insert elements of array: ";
    for(short i = 0; i<x; i++) cin>>a[i]; cout<<endl<<endl;
    displayArr(a,x);
    isSorted(a,x);
}

int main(){
    int s, arr[s]; cout<<"Enter the array size: "; cin>>s; cout<<endl;
    createArr(arr,s);
}