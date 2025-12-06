#include<bits/stdc++.h>
using namespace std;

int main(){
    /*
        Pointers:
        data_type* pointer_name; // pointer declaration
        or, data_type *pointer_name; // pointer declaration
        or, data_type * pointer_name; // pointer declaration
    */

    int x = 5;
    int* p = &x; // or int *p = &x;
    int *p2 = &x; // or int* p2 = &x;
    int **pp = &p; // pointer to pointer      , or int** pp = &p2;
    int** pp2 = &p2; // pointer to pointer , or int **pp2 = &p;

    // both will give the address of x
    cout<<"&x: "<<&x<<endl;
    cout<<"p: "<<p<<endl;
    cout<<"p2: "<<p2<<endl;
    cout<<"pp: "<<pp<<endl; // address of pointer p
    cout<<"pp2: "<<pp2<<endl; // address of pointer p2
    cout<<"x: "<<x<<"  *p2: "<<*p2<<"  **pp: "<<**pp<<endl; // *p2 and *p give the value at address &x

    cout<<endl<<endl;

    float y = 3.5;
    float* fp = &y;
    cout<<"&y: "<<&y<<endl;
    cout<<"fp: "<<fp<<endl;
    cout<<"y: "<<y<<"  *fp: "<<*fp<<endl;

    cout<<endl<<endl;

    bool b = true;
    bool* fb = &b;
    cout<<"&b: "<<&b<<endl;
    cout<<"fb: "<<fb<<endl;
    cout<<"b: "<<b<<"  *fb: "<<*fb<<endl;
}
