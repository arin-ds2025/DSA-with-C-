#include<bits/stdc++.h>
using namespace std;

int main(){
    char ch = 'A';
    char * p_ch = &ch; // or char* p_ch  or  char *p_ch
    cout<<&ch<<endl<<p_ch<<endl;
    cout<<"ch: "<<ch<<"  *p_ch: "<<*p_ch<<endl;

    cout<<endl<<endl;

    int x = 4;
    int * p = &x;
    cout<<"*p : "<<*p<<endl;
    *p = 8; // we can change the value of x using pointer p
    cout<<"x: "<<x<<endl;

}
