/*
    Count the numbers of elements in given array greater than a given number..
    (how many numbers in that array are larger than the given array)
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,11,12,13,14,15,16,21,22,23,25,26,26};
    short x, count = 0; cout<<"Enter a number: "; cin>>x;
    bool flag = 0;
    for(short i = 0; i<std::size(arr); i++){
        if(arr[i]==x){
            flag = 1;
        }
    }

    if(flag==1){
        for(short j = 0; j<std::size(arr); j++){
            if(arr[j]>x) count++;
        }
        cout<<"There are "<<count<<" number of greater elements in that array ";
    }else cout<<"Sorry, your given value x ("<<x<<") is not in that array";
}