// #include<bits/stdc++.h>
#include<iostream>
#include<iterator>
using namespace std;

// so we can pass a pointer instead of array
void display(int *n, int s){
    for(short i = 0;i<s; i++) {
        cout<<*n<<endl; 
        n++; // it will increase the address of each element of the array after each circle of the loop
    } 
    cout<<endl;
}

//or

void display2(int *x, int s){
    for(short i = 0;i<s; i++) {
        cout<<x[i]<<endl;
    }
}

int main(){
    int arr[] = {1,2,3,4,5};
    int * ptr = arr; // we can also use &arr or &arr[0]
    cout<<"ptr: "<<ptr<<" and *ptr: "<<*ptr<<" and arr: "<<arr<<" and &arr: "<<&arr<<endl; //*ptr will print the first element of the array, cause it stores the address of the first element of the array

    // but we can also print the elements of the array by indaxing the pointer without *
    cout<<"ptr[2]: "<<ptr[2]<<" and ptr[4]: "<<ptr[4]<<endl<<endl;

    // we can change the value of array using pointer without *
    ptr[1]=9;

    // we can print the whole array using pointer without *, through loop
    short Size = sizeof(arr)/sizeof(arr[0]);
    for(short i = 0; i<Size; i++) cout<<ptr[i]<<" ";
    cout<<endl<<endl;
    display(arr,Size); 
    cout<<endl;
    display2(arr,Size); 
    cout<<endl<<endl;

    int * ptr2 = arr;
    *ptr2 = 8;
    ptr2++;
    *ptr2 = 9;
    ptr2--;
    for(short i = 0; i<Size; i++) cout<<ptr2[i]<<" ";
} 