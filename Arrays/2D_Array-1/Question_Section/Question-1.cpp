/*
    Write a program to store roll number and marks obtained by 4 students side by side in a matrix
*/

#include<bits/stdc++.h>
using namespace std;

void display(int m , int n){
    int arr [m][n];

    cout<<"Enter the marks of"<<n<<" subjects of "<<m<<" students: "<<endl;
    for(short i = 0; i<m; i++){
        for(short j = 0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl<<endl;

    cout<<"So, the marks of "<<n<<" subjects of "<<m<<" students is: "<<endl;
    for(short i = 0; i<m; i++){
        cout<<"Roll ("<<i+1<<") gets: ";
        for(short j = 0; j<n; j++){
            cout<<"  "<<arr[i][j]<<"  ";
        }cout<<endl;
    }
}

int main(){
    int x1,x2;
    cout<<"Enter the number of students: "; cin>>x1; cout<<endl;
    cout<<"Enter the number of subjects: "; cin>>x2; cout<<endl<<endl;
    display(x1,x2);
}