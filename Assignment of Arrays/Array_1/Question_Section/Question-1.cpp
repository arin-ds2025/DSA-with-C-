/*
    Calculate the product of all the elements in the given array
*/

#include<bits/stdc++.h>
using namespace std;

void productOfElements(int a[],int size){
    short p = 1;
    for(short i = 0; i<size; i++){
        p*=a[i];
    }
    cout<<"The product of all emements of the given array: "<<p<<endl;

}

void takeInputOfArr(int a[],int size){
    cout<<"Insert the array elements: ";
    for(short i = 0; i<size; i++) cin>>a[i]; cout<<endl;
    productOfElements(a,size);
}

int main(){
    int x; cout<<"Enter the size of array: "; cin>>x; cout<<endl;
    int arr1[x];
    takeInputOfArr(arr1,x);
}