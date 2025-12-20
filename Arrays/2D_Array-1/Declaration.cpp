#include<bits/stdc++.h>
using namespace std;

int main(){
    // the elements of a 2D array is rows*columns

   // int arr[][] = {{1,2,3},{4,5,6}}; // this array has 2 rows and 3 columns..but this declaration is correct..
   int arr[2][3] = {{1,2,3},{4,5,6}}; // this declaration is correct;
   cout<<"The elements of arr with "<<2<<" rows and "<<3<<" columns :"<<endl;
    for(short i = 0; i<2; i++){
        for(short j = 0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
    cout<<"The size of arr is: "<<(sizeof(arr)/sizeof(arr[0][0]));
    cout<<endl<<endl;

    // or
    int arr1[][3] = {1,2,3,4,5,6,7,8,9,0,1,2}; // this array has 3 columns and the rows(4) will be autometically taken
    // int arr1[4][] = {1,2,3,4,5,6,7,8,9,0,1,2}; // but this is not valid
    cout<<"The elements of arr1 with "<<2<<" rows and "<<3<<" columns :"<<endl;
    for(short i = 0; i<4; i++){
        for(short j = 0; j<3; j++){
            cout<<arr1[i][j]<<" ";
        }cout<<endl;
    }
    cout<<"The size of arr1 is: "<<(sizeof(arr1)/sizeof(arr1[0][0]));
    cout<<endl<<endl;

    // or
    int arr2[4][2] = {1,2,3,4,5,6,7,8}; // we can also store datas like this in 2D arrays, and the elements will be autometically taken with 4 rows and 2 columns
    cout<<"The elements of arr2 with "<<4<<" rows and "<<2<<" columns :"<<endl;
    for(short i = 0; i<4; i++){
        for(short j = 0; j<2; j++){
            cout<<arr2[i][j]<<" ";
        }cout<<endl;
    }
    cout<<"The size of arr2 is: "<<(sizeof(arr2)/sizeof(arr2[0][0]));
    cout<<endl<<endl;

   // or
   int arr3 [3][4]; // this declaration is also correct
 
}