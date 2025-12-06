#include<bits/stdc++.h>
using namespace std;

void sWaP_alias(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
    return;
}

int main(){
    int a = 758572, b = 758578;
    cout<<"Before swap function: "<<endl<<"a: "<<a<<"  and b: "<<b<<endl;
    sWaP_alias(a,b); cout<<endl;
    cout<<"After swap function: "<<endl<<"a: "<<a<<"  and b: "<<b<<endl;
}
