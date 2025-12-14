/*
    WAP to find the largest three elements in the array
*/

#include<bits/stdc++.h>
using namespace std;

// Approach-1
void largest3Num_1(int n[], int x){
    // using vector.. so that we can reverse_sort the array
    vector<int> v;
    for(short i = 0; i<x; i++) v.push_back(n[i]);
    sort(v.begin(),v.end()); // if we used sort(v.begin(),v.end()); then the loop will run in reverse formate

    cout<<"The largest three numbers of the given array (approach-1): ";
    for(short i = x-1; i>=x-3; i--){
        cout<<v[i]<<" ";
    } cout<<endl<<endl;
}

// Approach-2
void largest3Num_2(int n[], int x){
    int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
    for(short i = 0; i<x; i++){
        if(max1<n[i]){
            max3 = max2;
            max2 = max1;
            max1 = n[i];
        }else if(max2<n[i]){
            max3 = max2;
            max2 = n[i];
        }else if(max3<n[i]){
            max3 = n[i];
        }
    } 

    cout<<"The largest three numbers of the given array (approach-2): "<<max1<<" "<<max2<<" "<<max3;
    cout<<endl<<endl;
}

void displayArr(int a[], int x){
    cout<<"Your created array is: ";
    for(short i = 0; i<x; i++) cout<<a[i]<<" "; cout<<endl<<endl;
}

void createArr(int a[], int x){
    cout<<"Insert elements of array: ";
    for(short i = 0; i<x; i++) cin>>a[i]; cout<<endl<<endl;
    displayArr(a,x);
    largest3Num_1(a,x);
    largest3Num_2(a,x);
}

int main(){
    int s, arr[s]; cout<<"Enter the array size: "; cin>>s; cout<<endl;
    createArr(arr,s);
}