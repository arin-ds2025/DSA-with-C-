#include<bits/stdc++.h>
using namespace std;

int main(){
    // pop function used to remove the last element of the dynamic array or vector
    vector<int> v;
    cout<<"Size of v,Befor pop_back function : "<<endl;
    cout<<v.size()<<endl;
    v.push_back(2);
    cout<<v.size()<<endl;
    v.push_back(5);
    cout<<v.size()<<endl;
    v.push_back(8);
    cout<<v.size()<<endl;
    v.push_back(0);
    cout<<v.size()<<endl;
    cout<<"Capacity of the vector after all push_back(): "<<v.capacity()<<endl<<endl;
 

    cout<<"Size of v,after pop_back function : "<<endl<<"befor any pop: "<<endl;
    cout<<v.size()<<endl;
    v.pop_back();
    cout<<"after first pop : "<<endl;
    cout<<v.size()<<endl;
    v.pop_back();
    cout<<"after second pop : "<<endl;
    cout<<v.size()<<endl;
    v.pop_back();
    cout<<"after third pop : "<<endl;
    cout<<v.size()<<endl;
    v.pop_back();
    cout<<"after forth pop : "<<endl;
    cout<<v.size()<<endl;
    cout<<"But the capacity of the vector after all pop_back() is still: "<<v.capacity()<<endl<<endl;
    
    // after each pop_back() size is decreasing but the capcitiy  of the vector doesn't change
}