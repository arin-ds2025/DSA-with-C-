#include<bits/stdc++.h>
using namespace std; 

int main(){
    // 1st method: (if the capacity of the vector is given)
    vector<int> v1(4);
    for(short i = 0; i<4; i++) cin>>v1[i]; cout<<endl;
    for(short i = 0; i<4; i++) cout<<v1[i]<<endl;
    cout<<endl<<endl;

    // 2nd method: (if the size of the vector is not initialized)
    vector<float> v2;
    for(short i = 0; i<5; i++){ short x; cin>>x; v2.push_back(x);} cout<<endl;
    for(short i = 0; i<v2.size(); i++) cout<<v2[i]<<endl; 
    cout<<endl<<endl;
}