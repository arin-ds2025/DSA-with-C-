#include<bits/stdc++.h>
using namespace std;

void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    /*
        or,
        a = a+b;
        b = a-b;
        a = a-b;
    */

    cout<<"Inside Swap Function: "<<a<<" "<<b<<endl;
}

int main(){
    int x = 15, y = x-5; int *p1 = &x, *p2 = &y;
    cout<<"Before Swap Function: "<<x<<" "<<y<<endl;
    swap(*p1, *p2);
}
