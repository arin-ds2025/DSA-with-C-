#include<bits/stdc++.h>
using namespace std;

int main(){
    int pass[6]; // for menually insert elements, int pass[]; is not valid, it'll through error
    
    // taking input: (Using loop) ..
    short size = sizeof(pass)/sizeof(pass[0]);
    for(int i = 0; i<size; i++){
        cout<<"Enter "<<i<<" no. index pass: "; 
        cin>>pass[i]; 
    }

    // print the values: (Using loop)..
    short size2 = std::size(pass);
    for(int j = 0; j<size2; j++) cout<<pass[j];
}