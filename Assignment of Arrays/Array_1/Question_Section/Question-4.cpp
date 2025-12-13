/*
    Given an array, predict if the array contains duplicates or not
*/

#include<bits/stdc++.h>
using namespace std;

void hasDup(int n[], int size){
    short count = 0;
    vector<int> v;
    bool flag = 0;
    for(short i=0; i<size-1; i++){
        for(short j = i+1; j<size; j++){
            if(n[i]==n[j]){
                count++;
                v.push_back(n[i]);
                flag = 1;   
            }    
        }
        
    }

    if(flag==1){
        cout<<"Yes, there are "<<count<<" duplicates in that array and these are: "<<endl;
        for(short i = 0; i<v.size(); i++) cout<<v.at(i)<<endl;
    } else cout<<"Sorry, there is no duplicate element in that array ";
}

void inputProcess(int a[], int size){
    cout<<"Insert the elements of the array: ";
    for(short i = 0; i<size; i++) cin>>a[i];
    hasDup(a,size);
}

int main(){
    short x; cout<<"Enter the array size: "; cin>>x; cout<<endl;
    int arr[x];
    inputProcess(arr,x);
}