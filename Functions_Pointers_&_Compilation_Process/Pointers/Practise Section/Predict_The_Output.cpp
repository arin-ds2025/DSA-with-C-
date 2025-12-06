#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 13;
    int *ptr = &a;
    // int b = ++(*ptr);
    int b = (*ptr)++;
    cout<<a<<" "<<b<<endl;
}