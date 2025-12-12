// Vector is the replacement of array. array is fixed sized but vector isn't. vector can be called as dynamic array..!
#include<bits/stdc++.h>
using namespace std;

int main(){
   // push_back(element) is use to insert value to the array from last
   vector<int> v; 
   v.push_back(2);
   v.push_back(6);
   v.push_back(8);
   v.push_back(0);
   cout<<v[0]<<endl;
   cout<<v[1]<<endl;
   cout<<v[2]<<endl;
   v[3] = 10; // this updation is valid, cause we already insert the valus in this perticular address
   cout<<v[3]<<endl;
   cout<<endl<<endl;

}