/*
    Find the second largest element in the given array in one pass
*/

#include<bits/stdc++.h>
using namespace std;

void secondLargest(int a[], int size) {
    // we can use one loop.. cause in question there is a condition that 'in one pass'
    if (size<2){
        cout << "Array has less than 2 elements. No second largest."<<endl<<endl;
        return;
    }
    int max = INT_MIN;
    int smax = INT_MIN;
    for(short i = 0; i<size; i++){
        if(a[i]>max){
            smax=max;    // previous max becomes second max
            max=a[i];
        }
        else if(a[i]>smax && a[i]<max){  // important: a[i] != max to handle duplicates
            smax=a[i];
        }
    }
    if(smax == INT_MIN) cout<<"No second largest element (all elements are same)"<<endl<<endl;
    else cout<<"The second largest element of the given array is: " <<smax<<endl<<endl;
}

void displayArray(int a[], int size){
    cout<<"Your given array is: ";
    for(short i = 0; i<size; i++) cout<<a[i]<<" "; cout<<endl<<endl;
}

void takeInputArr(int a[], int size){
    cout<<"Insert your elements in array: ";
    for(short i = 0; i<size; i++) cin>>a[i];
    displayArray(a,size);
    secondLargest(a,size);
}


int main(){
    short x; cout<<"Enter the size of array: "; cin>>x; cout<<endl;
    int arr[x];
    takeInputArr(arr,x);
}