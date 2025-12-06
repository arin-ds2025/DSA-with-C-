#include<bits/stdc++.h>
using namespace std;

int main(){
    short x = 5;
    short* ptr = &x;
    cout<<"Befor increment,  ptr: "<<ptr<<"  and *ptr: "<<*ptr<<endl;
    // ptr+=1;
    //cout<<"After incriment,  ptr: "<<ptr<<"  and *ptr: "<<*ptr<<endl; // here *ptr is undefined behavior as we have incremented the pointer to point to some random memory location.
    *ptr += 1; // this is correct
    cout<<"After incrimenting value at ptr,  ptr: "<<ptr<<"  and *ptr: "<<*ptr<<endl;
    // but *ptr++; // this is incorrect as it will try to increment the value at ptr which is not allocated to us.
    (*ptr)++; // this is correct
    cout<<"After incrimenting value at ptr using (*ptr)++,  ptr: "<<ptr<<"  and --(*ptr): "<<--(*ptr)<<endl;
}
