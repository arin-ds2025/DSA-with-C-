/*
    Given an array of marks of students, if the marks of any student is less than 35 prints its 
    roll number. (Roll number here prefers to the index of the array)
*/

#include<bits/stdc++.h>
//#include<iterator> // for std::size
using namespace std;

int main(){
    int marks [] = {98,99,87,58,43,49,69,35,22,33,31,29,81,100,99,92};
    int size = std::size(marks);
    cout<<"The size of marks array: "<<size<<endl;
    for(short i = 0; i<size; i++){
        if(marks[i]<35) cout<<"The roll for got marks less than 35 is: "<<i+1<<" and the marks: "<<marks[i]<<endl; 
    }

    cout<<endl<<endl;

    // in another way:
    short n ; cout<<"Enter number of students: "; cin>>n;
    int mrks [n];
    cout<<"Enter marks: ";
    for(short i = 0; i<=n-1; i++)cin>>mrks[i]; cout<<endl;
    for(short i = 0; i<n; i++){
        if(mrks[i]<35) cout<<"The roll for got marks less than 35 is: "<<i+1<<" and the marks: "<<mrks[i]<<endl;
    }
}