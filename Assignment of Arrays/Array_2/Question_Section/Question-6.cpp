/*
    Find the unique number of a given array where all elements are being repeated twice with with one value being unique
*/

#include<bits/stdc++.h>
using namespace std;

void displayArr(int a[], int x){
    cout<<"Your created array is: ";
    for(short i = 0; i<x; i++) cout<<a[i]<<" "; cout<<endl<<endl;
}

// Approach-1
void showUnique_1(int n[], int x){
    int num = 0, idx = -1,  count = 0;
    for(short i = 0; i<x; i++){
        bool flag = 1;
        for(short j = 0; j<x; j++){
            if((i!=j) && (n[i]==n[j])) {
                flag = 0;
                break;
            }
        }
        if(flag){
            num = n[i];
            idx = i;
            break; // stop,if we get first unique element
        } 

    }
    if(idx != -1) cout<<"Yes, there is an unique value ("<<num<<") at "<<idx<<" no. index (Approach-1)"<<endl<<endl;
    else cout<<"No, there is no unique value in that given array (Approach-1)."<<endl<<endl;
}

// Approach-2
void showUnique_2(int n[], int x){
    bool flag = 0;
    for(short i = 0; i<x; i++){
        short count = 0;
        for(short j = 0; j<x; j++){
            if((i!=j) && (n[i]==n[j])) {
                count++;
            }
        }
        if(count==0){
            cout<<"Yes, there is an unique value ("<<n[i]<<") at "<<i<<" no. index (Approach-2)"<<endl<<endl;
            flag = 1;
            break; // stop,if we get first unique element
        } 
    }
    if(flag==0) cout<<"No, there is no unique value in that given array (Approach-2)."<<endl<<endl;
}

void createArr(int a[], int x){
    cout<<"Insert elements of array: ";
    for(short i = 0; i<x; i++) cin>>a[i]; cout<<endl<<endl;
    displayArr(a,x);
    showUnique_1(a,x);
    showUnique_2(a,x);
}

int main(){
    // mainly we've to find out the unique value in the given array, where all elements are being repeated, except that one unique value

    int s, arr[s]; cout<<"Enter the array size: "; cin>>s; cout<<endl;
    if(s>1 && s%2!=0){
        createArr(arr,s);
    } else{
        cout<<"Enter an odd array size which must be greater than 1";
    }
}