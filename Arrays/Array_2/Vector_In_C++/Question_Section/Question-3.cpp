/*
    Write a program to copy the contents of one array into a vector in the reverse order
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> arrToVec(int c[], int size){ // if we want to retuen vector then the retuen type should also be vector<data_type>
    vector<int> a_t_v;
    for(short i = 0; i<size; i++){
        a_t_v.push_back(c[i]);
    }
    return a_t_v;
}

void revDisplay(int c_arr[],int size){
    vector<int> v = arrToVec(c_arr,size);
    sort(v.begin(),v.end());
    cout<<"The reverse sorted vector is: ";
    for(short i = size-1; i>=0; i--) cout<<v[i]<<" ";
}

void display(vector<int> s){
    for(short i = 0; i<s.size(); i++){
        cout<<" "<<s[i];
    }
}

int main(){
    int arr[] = {1, 3, 2, 4, 0, 8, 5, 11, 9, 7, 6, 10};
    short sizeOfarr = sizeof(arr)/sizeof(arr[0]); cout<<"The original array is: ";
    for(short i = 0; i<sizeOfarr; i++) cout<<arr[i]<<" "; cout<<endl<<endl;
    
    // reverse with sorting
    revDisplay(arr,sizeOfarr);
    cout<<endl<<endl;

    // reverse without sorting and in very short
    vector<int> v1;
    for(short i = 0; i<sizeOfarr; i++){ // copy from array to vector
        v1.push_back(arr[i]);
    }
    vector<int> v2(v1.size()); // copy from vector v1 to vector v2
    cout<<"The reverse unsorted vector is: ";
    for(short i = 0; i<v2.size(); i++) {
        // i + j = size - 1
        // int j =  v1.size() - 1 - i;
        // v2[i] = v1[j];
        v2[i] = v1[v1.size()-1-i];  // in one line
    }    
    display(v2);
}