#include<bits/stdc++.h>
using namespace std;

void corrSwap(short *p1, short *p2){
    short temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    /*
        // Without using a temp variable:
        or:
        *p1 = *p1 + *p2;
        *p2 = *p1 - *p2;
        *p1 = *p1 - *p2;
    */

    return;
}

int main(){
    short a = 19, b = 21;
    cout<<"Before corrSwap function: "<<endl<<"a: "<<a<<"  and b: "<<b<<endl<<endl;
    corrSwap(&a,&b);
    cout<<"After corrSwap function: "<<endl<<"a: "<<a<<"  and b: "<<b<<endl;
}
