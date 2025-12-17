/*
    Important Question:
    Find the next permutations of array. (LeetCode-31)
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


void findNextPermutation2(vector<int> a){
    short s = a.size();

    // first, find the index that we want to compare with
    short idx = -1;
    for(short i = s-1; i>=0; i--){
        if(a[i]>a[i-1]){
            idx = i-1;
            break;
        }
    }

    if(idx != -1){
        short swap_idx = idx;
        for(short j = s-1; j>=idx+1; j--){
            if(a[j]>a[idx]){
                swap_idx = j;
                break;
            }
        }
        swap(a[idx], a[swap_idx]);
    }
    reverse(a.begin()+idx+1, a.end());

    cout<<"The next permutation of the array is: "<<endl;
    displayVec(a);
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

    findNextPermutation2(v);
}