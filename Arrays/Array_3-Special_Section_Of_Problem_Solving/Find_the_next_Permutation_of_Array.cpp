/*
    Important Question:
    Find the next permutations of array. (LeetCode-31)

    Note: If not possible then print the sorted order in ascending order
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


void findNextPermutations(vector<int>& v){
    short n = v.size();
    short idx = -1;

    // step-1) finding pivot index
    for(short i = n-2; i>=0; i--){
        if(v[i]<v[i+1]){
            idx = i;
            break;
        }
    }

    if(idx==-1){ // if array is already greatest
        reverse(v.begin(),v.end()); return; 
    }

    // step-2) sorting/reverse after pivot
    reverse(v.begin()+idx+1, v.end());

    // step-3) finding the just greater element than idx
    short j = 1;
    for(short i = idx+1; i<n; i++){
        if(v[i]>v[idx]){
            j = i;
            break;
        } 
    }

    // step-4) swapping idx and j
    short temp = v[idx];
    v[idx] = v[j];
    v[j] = temp;

    cout<<"The next permutations of your given array: "<<endl;
    displayVec(v);
}


vector<int> createVec(vector<int>& a, int s)
{
    cout << "Enter the elements of array: ";
    for (short i = 0; i < s; i++) cin >> a[i];
    cout << endl << endl;

    return a;
}

int main(){
    /*
        Example: v = {1,2,3}
        now the number of permutations of v is 3! = 6 and they are:
        {1,2,3} , {1,3,2} , {2,1,3} , {2,3,1} , {3,1,2} , {3,2,1} .
        so, 
        the next permutation of {1,2,3} is {1,3,2}
        the next permutation of {1,3,2} is {2,1,3}
        the next permutation of {2,1,3} is {2,3,1}
        the next permutation of {2,3,1} is {3,1,2}
        the next permutation of {3,1,2} is {3,2,1}
    */


    short x;
    cout<<"Enter the array size: "; cin>>x; cout<<endl;
    vector<int> v(x);
    createVec(v,x);
    cout<<"After created, "<<endl;
    displayVec(v);

    findNextPermutations(v);
}