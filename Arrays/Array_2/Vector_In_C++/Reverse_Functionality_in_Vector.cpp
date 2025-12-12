#include<bits/stdc++.h>
using namespace std;

// if we want to reverse the whole vector
void revDisplay(vector<int> a){
    // int  i = 0, j = a.size()-1;
    // while(i<=j){
    //     a[i] = a[i] + a[j];
    //     a[j] = a[i] - a[j];
    //     a[i] = a[i] - a[j];

    //     i++;
    //     j--;
    // } 

    // or direct reverse , using reverse(v.begin(),v.end()); method
    reverse(a.begin(),a.end());
    for(short i = 0; i<a.size(); i++) cout<<" "<<a[i]; cout<<endl;
}

// if we want to reverse a part of vector
vector<int> revPOVec(int i, int j, vector<int> v){ // here i and j is specific index number, which indicate from where to where we want to reverse
    while(i<=j){
        short temp = v[i];
        v[i] = v[j];
        v[j] = temp;

        i++;
        j--;
    }
    return v; // if we want to returnt the whole vector the the function's return type must be vector<data_type>
}

void display(vector<int> v){
    for(short i = 0; i<v.size(); i++) cout<<" "<<v[i]; cout<<endl;
}

int main(){
    // we can direct reverse vector using reverse(v.begin(),v.end()); method
    vector<int> v;
    for(short i = 1; i<22; i++){ if(i%2!=0) v.push_back(i); }
    revDisplay(v);
    cout<<endl;
    display(revPOVec(2,6,v));  // from index no.2 to index no. 6, the elements will reverse but others will be as usual
}