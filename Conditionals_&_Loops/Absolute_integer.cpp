#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    cout<<endl;
    if(x==0){cout<<x<<" is not a positive or negtaive number.! ";}
    else if(x<0){
        int y = -x; // y = -(-value of x)
        cout<<"The absolute value of "<<x<<" or |"<<x<<"| is "<<y<<endl;
    }else{
        cout<<"The absolute value of "<<x<<" or |"<<x<<"| is "<<x<<endl;
    }
}