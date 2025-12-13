/*
    Find the minimum value out of all the elements in the array 
*/

#include<bits/stdc++.h>
using namespace std;

int miniOfArr(int a[], int s){
    short min = INT_MAX;
    if(s==0 || s<2) {cout<<"There is no minimum value in that array"; return 0; }
    for(short i = 0; i<s; i++){
        if(min>a[i]) min = a[i];
    }
    return min;
}

int main(){
    int arr[] = {4,3,1,-1,5,6,0,12,8} , size = sizeof(arr)/sizeof(arr[0]);
    if(size>1) cout<<"The ninimum value of the given array is: "<<miniOfArr(arr,size);
    else miniOfArr(arr,size);
}