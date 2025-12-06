#include<bits/stdc++.h>
using namespace std;

void factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<"Factorial of "<<n<<" is "<<fact<<endl;
}

int main(){
    int num;
    cout<<"Enter a number to find its factorial: ";
    cin>>num;
    factorial(num);
    return 0;
}