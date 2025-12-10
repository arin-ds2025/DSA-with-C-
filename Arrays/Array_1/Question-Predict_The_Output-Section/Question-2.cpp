/*
    Calculate the sum of all elements in the given array
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5], sum =0;
    for(short k = 0; k<std::size(arr); k++) cin>>arr[k];
    for(short i = 0; i<std::size(arr); i++) sum+=arr[i];
    cout<<"The sum of all elements of the given array: "<<sum<<endl;
}