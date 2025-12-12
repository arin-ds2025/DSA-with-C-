#include<bits/stdc++.h>
using namespace std;

void changeVec1(vector<int> a){ // for pass by values
    a[0] = 2; // it doesn't affect the the main vector in main function. it's only appling in this function
    a[a.size()-1] = 10; // same
    // we can directly use a.size() here.. but in case of array we can't
    cout<<"In changeVec1 function: ";
    for(short i = 0; i<a.size(); i++) cout<<a.at(i)<<" "; cout<<endl;
}

void changeVec2(vector<int>& a){ // pass by reference
    // now the changes will directly affect the main vector in main function
    a[0] = 1; // this and next 2 lines are also don't affect the main vector of main function
    a[a.size()-1] = 9;
    a.push_back(11);
    cout<<"In changeVec2 function: ";
    for(short i = 0; i<a.size(); i++) cout<<a.at(i)<<" "; cout<<endl; 
}

int main(){
    /*
        in case of both pass by values and pass by reference, the external funtion doesn't affect the main function
    */

    /*  in case of pass by values  */
    vector<int> v1;
    for(short i = 1; i<10; i++) { if(i%2!=0) v1.push_back(i); }
    // if we want to change the vector in function,it doesn't affect the main vector in main funtion
    changeVec1(v1);
    cout<<"In main funtion: ";
    for(short i = 0; i<v1.size(); i++) cout<<v1.at(i)<<" "; cout<<endl<<endl;


    /*  in case of pass by reference , using &(ampercant) operator: */
    // it's mostly like normal using of pointers..
    vector<int> v2;
    for(short i = 2; i<11; i++) { if(i%2==0) v2.push_back(i); }
    cout<<"In main funtion: ";
    for(short i = 0; i<v2.size(); i++) cout<<v2[i]<<" "; cout<<endl;
    changeVec2(v2);


}