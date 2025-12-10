/*
    Find the maximum and minimum value out of all elements in the array
*/

#include<bits/stdc++.h>
using namespace std; 

int main(){
    int arr[]={1,4,2,3,8,5,6,11,10,15} , maxi = arr[0], mini = arr[0];
    // for maximum value
    for(short i = 0; i<std::size(arr); i++){
        if(maxi<arr[i]) maxi = arr[i];
    }
    cout<<"The maximum value is: "<<maxi<<endl;

    // for minimum value
    for(short i = 0; i<std::size(arr); i++){
        if(mini>arr[i]) mini = arr[i];
    }
    cout<<"The minimum value is: "<<mini<<endl<<endl;


    // another approach , using INT_MIN for get maximum value and INT_MAX for minimum value
    int max = INT_MIN, min = INT_MAX;  // instead of inititializing the value with first index value

    // for maximum value
    for(short i = 0; i<std::size(arr); i++){
        if(max<arr[i]) max = arr[i];
    }
    cout<<"The maximum value is: "<<max<<endl;

    // for minimum value
    for(short i = 0; i<std::size(arr); i++){
        if(min>arr[i]) min = arr[i];
    }
    cout<<"The maximum value is: "<<min<<endl;

}