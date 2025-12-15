/*
    Move all the zeros to the end of the array
*/

#include<bits/stdc++.h>
using namespace std;

void displayArr(int a[], int s){
    cout<<"The array is: ";
    for(short i = 0; i<s; i++) cout<<a[i]<<" "; cout<<endl<<endl;
}

// Approach-1 (but not efficient)
void moveZeros1(int a[], int x){
    vector<int> v; int a2[x];
    for(short i = 0; i<x; i++){
        if(a[i]!=0) v.push_back(a[i]);
    }
    for(short i = 0; i<x; i++){
        if(a[i]==0) v.push_back(a[i]);
    }
    for(short i = 0; i<x; i++){
        a2[i] = v[i];
    }
    cout<<"After move all zeros to the end of the array (Approach-1): "<<endl;
    displayArr(a2,x);
}

// Approach-2 (Optimized)
void moveZeros2(int a[], int x){
    short j = 0;
    for(short i = 0; i<x; i++){
        if(a[i]!=0){
            // if(i!=j){
            //     int temp = a[j];
            //     a[j] = a[i];
            //     a[i] = temp;
            // }
            swap(a[i],a[j]); // shortcut,, using buildin swap() function
            j++;
        }
    }
    cout<<"After move all zeros to the end of the array (Approach-2): "<<endl;
    displayArr(a,x);
}

void createAndProcessArr(int a[], int s){
    cout<<"Insert elements of array: ";
    for(short i = 0; i<s; i++) cin>>a[i]; cout<<endl<<endl;
    cout<<"After create: "<<endl;
    displayArr(a,s);
    moveZeros1(a,s);
    moveZeros2(a,s);
}

int main(){
    int s, arr[s]; cout<<"Enter the array size: "; cin>>s; cout<<endl;
    createAndProcessArr(arr,s);
}