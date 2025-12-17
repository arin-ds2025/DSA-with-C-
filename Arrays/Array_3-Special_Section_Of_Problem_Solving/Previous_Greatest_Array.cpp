// we've to create new array or dynamic array by entering previous highest value

#include<bits/stdc++.h>
using namespace std;

void displayVec(vector<int> a)
{
    short s = a.size();
    cout << "The array is: ";
    for (short i = 0; i < s; i++) cout << a[i] << " ";
    cout << endl<< endl;
}


void prevGretVal(vector<int>& a) {
    int n = a.size();
    vector<int> v(n,-1);  
    
    int maxi = a[0];
    for (int i = 1; i<n; i++) {
        v[i] = maxi;  
        
        if(a[i]>maxi) {
            maxi = a[i];  
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

    prevGretVal(v);
}