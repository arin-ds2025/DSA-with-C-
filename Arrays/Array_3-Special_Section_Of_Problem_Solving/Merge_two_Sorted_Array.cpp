/*
    Merge two sorted arrays
*/

#include<bits/stdc++.h>
using namespace std;

void displayVec(vector<int> a)
{
    short s = a.size();
    cout << "The array is: ";
    for (short i = 0; i < s; i++) cout << a[i] << " ";
    cout << endl<< endl;
}

void uniqMerge2sortArr2(vector<int>& a1, vector<int>& a2) {
    short n, m, i, j, k; 
    n = a1.size(); // n contains the size of a1 vector
    m = a2.size(); // m contains the size of a2 vector
    i = 0; // 0 index of a1 vector
    j = 0; // 0 index of a2 vector

    vector<int> res(m+n); // the size of res vector would be (size of a1 vec + size of a2 vec)
    k = 0; // 0 index of res vector 

    while(i<n && j<m){
        if(a1[i]<a2[j]){
            res[k] = a1[i];
            i++;
        }
        else{
            res[k] = a2[j];
            j++;
        }
        k++;
    }

    // for remaining elements of a2 vector
    if(i==n){ // that means all elements of a1 vector have been taken already
        while(j<m){  // now storing remaining values of a2 vector
            res[k] = a2[j];
            k++;
            j++;
        }
    }

    // for remaining elements of a1 vector
    if(j==m){ // that means all elements of a2 vector have been taken already
        while(i<n){ // now storing remaining values of a1 vector
            res[k] = a1[i];
            k++;
            i++; 
        }
    }

    displayVec(res);

}

vector<int> createVec(vector<int>& a, int s)
{
    cout << "Enter the (sorted)elements of array: ";
    for (short i = 0; i < s; i++) cin >> a[i];
    cout << endl << endl;

    return a;
}

int main(){
    short x1,x2;
    cout<<"Enter the first array size: "; cin>>x1; cout<<endl;
    vector<int> v1(x1);
    createVec(v1,x1);
    cout<<"After create first vector: "<<endl;
    displayVec(v1);
    
    cout<<"Enter the second array size: "; cin>>x2; cout<<endl;
    vector<int> v2(x2);
    createVec(v2,x2);
    cout<<"After create second vector: "<<endl;
    displayVec(v2);

    cout<<"After marge and sorted: "<<endl;
    uniqMerge2sortArr2(v1,v2);

}