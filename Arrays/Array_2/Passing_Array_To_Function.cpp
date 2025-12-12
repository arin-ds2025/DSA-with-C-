#include<bits/stdc++.h>
using namespace std;

void passArr(int n[],int size){ // here int n[] will get the adress of int arr[].. so this int n[] doesn't make new array or allocate new memory address
    //int size = sizeof(n)/sizeof(n[0]); // it will not work, cause int n[] is a pointer here, not a new array
    for(short i = 0; i<size; i++) cout<<n[i]<<" "; cout<<endl;
}

void changeElement(int c[]){
    c[3] = 5; cout<<endl;
}

int main(){
    int arr[10]={2,5,8,0,1,1,8,9,1,4}, x = std::size(arr);
    cout<<"arr: "<<arr<<" and &arr: "<<&arr<<" and &arr[0]: "<<&arr[0]<<endl<<endl;
    passArr(arr,x); // &arr and arr both print the address of arr, which is the first element's address
    changeElement(arr);
    passArr(arr,x);
}