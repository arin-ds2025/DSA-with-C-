/*
    Find the first non-repeating element in the array
*/

#include<bits/stdc++.h>
using namespace std;

void displayArr(int a[], int s){
    cout<<"Your array is: ";
    for(short i = 0; i<s; i++) cout<<a[i]<<" "; cout<<endl<<endl;
}

void firstNonRepeating(int a[], int x){
    bool f = 0; short tmp;
    for(short i = 0; i<x; i++){
        bool repeat = 0;
        for(short j = 0; j<x; j++){
            if(i!=j && a[i]==a[j]){
                repeat = 1;
                break;
            }
        }
        if(repeat==0){
            tmp = a[i];
            f = 1;
            break;
        }
    }

    if(f==1) cout<<"Yes, "<<tmp<<" is the first non-repeating element.!"<<endl<<endl;
    else cout<<"No, there is all repeating values in that array"<<endl<<endl;
}

void createAndProcessArr(int a[], int s){
    cout<<"Insert elements of array: ";
    for(short i = 0; i<s; i++) cin>>a[i]; cout<<endl<<endl;
    displayArr(a,s);
    firstNonRepeating(a,s);
}

int main(){
    int s, arr[s]; cout<<"Enter the array size: "; cin>>s; cout<<endl;
    createAndProcessArr(arr,s);
}