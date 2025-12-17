// we've to create new array or dynamic array by entering next highest values

#include<bits/stdc++.h>
using namespace std;

void displayVec(vector<int> a)
{
    short s = a.size();
    cout << "The array is: ";
    for (short i = 0; i < s; i++) cout << a[i] << " ";
    cout << endl<< endl;
}


void nextGretVal(vector<int>& a) {
    int n = a.size();
    vector<int> v(n,-1);  
    
    int mini = a[0];
    for (int i = n-1; i>=0; i--) {
        v[i] = mini;  
        
        if(a[i]>mini) {
            mini = a[i];  
        }
    }
    
    cout << "After changes: " << endl;
    displayVec(v);
}


vector<int> createVec(vector<int>& a, int s){
    cout << "Enter the elements of array: ";
    for (short i = 0; i < s; i++) cin >> a[i];
    cout << endl << endl;

    return a;
}

int main(){
    short x;
    cout<<"Enter the array size: "; cin>>x; cout<<endl;
    vector<int> v(x);
    createVec(v,x);
    cout<<"After created (Original array), "<<endl;
    displayVec(v);

    nextGretVal(v);
}