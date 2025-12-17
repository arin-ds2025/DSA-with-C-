/*
    Merge two sorted arrays . LeetCode-88 version 
*/

#include<bits/stdc++.h>
using namespace std;

void displayVec(int a[], int s)
{
    cout << "The array is: ";
    for (short i = 0; i < s; i++) cout << a[i] << " ";
    cout << endl<< endl;
}

void merge(int a1[], int n, int a2[], int m) {
    short i, j, k;
    i = n-m-1; // last index of a1 array
    j = m-1; // last index of a2 array
    k = n-1; // last index of a1+a2 array 

    // now we've to compare between a1 array without extra zeros and a2 array in reverse formate 
    //and then insert them in k or whole size a1 array instead of extra zeros
    while(j>=0 && i>=0){
        if(a1[i]>a2[j]){
            a1[k] = a1[i];
            i--;
        }
        else{
            a1[k] = a2[j];
            j--;
        }
        k--;
    }

    // for  remaining elements of a2.. but no need for a1 as they are placed already
    while(j>=0){
        a1[k] = a2[j];
        j--;
        k--;
    }

    cout<<"After marged and sorted: "<<endl;
    displayVec(a1,n);
}

void createVec(int a[], int s)
{
    cout << "Enter the (sorted)elements of array: ";
    for (short i = 0; i < s; i++) cin >> a[i];
    cout << endl << endl;
}

int main(){
    short x1,x2;
    cout<<"Enter the first array size: "; cin>>x1; cout<<endl;
    cout<<"Enter the second array size: "; cin>>x2; cout<<endl;
    int arr1[x1+x2];
    cout<<"The first array size ("<<x1<<"+"<<x2<<") is "<<x1+x2<<endl;
    cout<<"Now insert "<<x1<<" elements and then it will fill autometically with "<<x2<<" zero(s)"<<endl;
    createVec(arr1,x1);
    for(short i = x1; i<x1+x2; i++) arr1[i]=0; // to fill the arr1 array with zeros (with arr2 array size)

    cout<<"After create first array: "<<endl;
    displayVec(arr1,x1+x2);
    
    int arr2[x2];
    cout<<"The second array size is: "<<x2<<endl;
    createVec(arr2,x2);

    cout<<"After create second array: "<<endl;
    displayVec(arr2,x2);

    merge(arr1, x1+x2, arr2, x2);
}