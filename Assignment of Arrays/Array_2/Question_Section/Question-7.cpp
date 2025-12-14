/*
    If an array contains n elements, then check if the given array is a palindrome or not
*/

#include<bits/stdc++.h>
using namespace std;

void displayArr(int a[], int x){
    cout<<"Your created array is: ";
    for(short i = 0; i<x; i++) cout<<a[i]<<" "; cout<<endl<<endl;
}

void isPalindrome(int n[], int s){ 
    bool flag = 1;
    for(short i = 0; i<(s/2 + 1); i++){
        if(n[i]!=n[s-1-i]) { flag = 0; break;}
    }
    if(flag==1) cout<<"Yes, your given array is a palindrome."<<endl<<endl;
    else cout<<"No, your given array is not a palindrome."<<endl<<endl;
}

void createArr(int a[], int x){
    cout<<"Insert elements of array: ";
    for(short i = 0; i<x; i++) cin>>a[i]; cout<<endl<<endl;
    displayArr(a,x);
    isPalindrome(a,x);
}

int main(){
    // palindrome means that array should look like same from first to last or last to first
    // example: int arr = {1,2,3,2,1}; or int arr = {1,2,2,1};

    int s, arr[s]; cout<<"Enter the array size: "; cin>>s; cout<<endl;
    createArr(arr,s);
   
}