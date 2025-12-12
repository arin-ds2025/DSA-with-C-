#include<bits/stdc++.h>
using namespace std;

int main(){
    // size refers the total existant elements of the dynamic array or vector
    // and capacity refers the next how many addresses can be taken to store next element:
    // example:
    vector<int> v1;
    cout<<v1.capacity()<<endl;
    v1.push_back(2);
    cout<<v1.capacity()<<endl;
    v1.push_back(3);
    cout<<v1.capacity()<<endl;
    v1.push_back(4);
    cout<<v1.capacity()<<endl;
    v1.push_back(5);
    cout<<v1.capacity()<<endl;

    cout<<endl<<endl;

    vector<int> v2;
    cout<<v2.size()<<endl;
    v2.push_back(2);
    cout<<v2.size()<<endl;
    v2.push_back(3);
    cout<<v2.size()<<endl;
    v2.push_back(4);
    cout<<v2.size()<<endl;
    v2.push_back(5);
    cout<<v2.size()<<endl;

    cout<<endl<<endl;
    
    // push back values through loop
    vector<int> v3;
    for(int i = 1; i<21; i++) {if(i%2==0) v3.push_back(i);}
    v3[9] = 24; // this is valid cause we've already initialized the values in vector v3
    for(short i = 0; i<10; i++) cout<<v3[i]<<" "; cout<<endl<<endl;

    vector<char> ch;
    ch.push_back('A');
    ch.push_back('r');
    ch.push_back('i');
    ch.push_back('n');
    for(short i = 0; i<ch.size(); i++) cout<<ch[i]; cout<<endl<<endl;
}