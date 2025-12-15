/*
    Count the number of triplets whose sum is equal to the given value x
*/

#include<bits/stdc++.h>
using namespace std;

void displayArr(int a[], int s){
    cout<<"Your created array is: ";
    for(short i = 0; i<s; i++) cout<<a[i]<<" "; cout<<endl<<endl;
}

void countTriplets(int a[], int s, int x){
    short count = 0;
    for(short i = 0; i<s-2; i++){
        for(short j = i+1; j<s-1; j++){
            for(short k = j+1; k<s; k++){
                if(a[i]+a[j]+a[k]==x){
                    count++;
                }
            }
        }
    } 
    if(count>0) cout<<"There are "<<count<<" triplet(s) in the array that sum to "<<x<<endl<<endl;
    else cout<<"No triplets found that sum to "<<x<<endl<<endl;
}

void createArr(int a[], int s, int x){
    cout<<"Insert elements of array: ";
    for(short i = 0; i<s; i++) cin>>a[i]; cout<<endl<<endl;
    displayArr(a,s);
    countTriplets(a,s,x);
}

int main(){
    // mainly we've to find out the count for numbers of array elements whose sum is equal to the user given value

    int s,x,arr[s]; cout<<"Enter the array size: "; cin>>s; cout<<"Enter the value: "; cin>>x; cout<<endl;
    createArr(arr,s,x);
}