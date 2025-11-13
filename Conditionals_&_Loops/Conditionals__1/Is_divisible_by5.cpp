#include<iostream>
using namespace std;

int main(){
    short x;
    cout<<"Enter a number: ";
    cin>>x;
    cout<<endl;
    if(abs(x)%5==0){
        cout<<"Yes, "<<x<<" is divisible by 5"<<endl;
    }else{
        cout<<"Sorry,, "<<x<<" is not divisible by 5"<<endl;
        cout<<"It's throughing remainder,, "<<x%5<<endl;
    }
   
}