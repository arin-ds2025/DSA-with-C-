#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr [3][4]; 

    // taking input
   cout<<"Enter elements of arr with "<<3<<" rows and "<<4<<" columns :"<<endl;
   for(short i = 0; i<3; i++){ // outer loop is for rows
        for(short j = 0; j<4; j++){ // inner loop is for columns
            cin>>arr[i][j];
        }
   }
   cout<<endl<<endl;


   cout<<"The elements of first row of arr: ";
   for(short i = 0; i<4; i++){
        cout<<arr[0][i]<<" ";
   }cout<<endl;

   cout<<"The elements of second row of arr: ";
   for(short i = 0; i<4; i++){
        cout<<arr[1][i]<<" ";
   }cout<<endl;

   cout<<"The elements of third row of arr: ";
   for(short i = 0; i<4; i++){
        cout<<arr[2][i]<<" ";
   }cout<<endl<<endl<<endl;


   // traverse through 2D array
   cout<<"Total elements of the arr are: "<<endl;
    for(short i = 0; i<3; i++){ // outer loop is for rows
        for(short j = 0; j<4; j++){ // inner loop is for columns
            cout<<" "<<arr[i][j];
        } cout<<endl;
   }
    cout<<"The size of arr3 is: "<<(sizeof(arr)/sizeof(arr[0][0]));   
}