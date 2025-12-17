/*
    Move all negative numbers to beginning and positive to end with constant extra spaces 
*/

#include<bits/stdc++.h>
using namespace std;

void displayArr(vector<int> a, int s)
{
    cout << "The array is: ";
    for (short i = 0; i < s; i++)
        cout << a[i] << " ";
    cout << endl
         << endl;
}


void move(vector<int> v, short x){
    // sort(v.begin(),v.end());
    // reverse(v.begin(),v.end());
    for(short i = 0; i<x-1; i++){
        for(short j = i+1; j<x; j++){
            if(v[i]<v[j]){
                short temp = v[i];
                v[i] = v[j];
                v[j] = temp; 
            }
        }
    }
    cout<<"after move, "<<endl;
    displayArr(v,x);
}


void createArrAndProcesses(vector<int> a, short s)
{
    cout << "Enter the elements of array: ";
    for (short i = 0; i < s; i++) cin >> a[i];
    cout<<endl<<endl;
    cout<<"Befor move, "<<endl;
    displayArr(a, s);
    move(a,s);
}

int main(){
    short s; cout<<"Enter the vector size: "; cin>>s; cout<<endl;
    vector<int> v(s);
    createArrAndProcesses(v,s);
}