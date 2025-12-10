#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr [5]; // it already takes 5 initiger bytes. total 4*5 = 20 bytes
    cout<<"The size of this array: "<<sizeof(arr)<<endl;
    for(short i = 0; i<std::size(arr); i++) cout<<&arr[i]<<endl; cout<<endl;

    //the whole address of an array is the first element's address of that array
    cout<<"The address of arr: "<<&arr<<endl;
    cout<<"The address of arr[0]: "<<&arr[0]<<endl;
}