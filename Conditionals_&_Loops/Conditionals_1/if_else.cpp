#include<iostream>
using namespace std;

int main(){
    // take positive integer input and find if it is even or odd:
    short x;
    cout<<"Enter a positive interger number to find even or odd: ";
    cin>>x;
    if(x==-0){cout<<"Tumsein na ho payega,beta.. gand maraw apni...!";}
    else if(x==0){
        cout<<x<<" is not an even or odd number.. try again..!"<<endl;
        cout<<"Enter a positive interger number again, to find even or odd: ";
        cin>>x;
        cout<<endl;
        if(x>0){
            if(x%2==0){cout<<"Your Given Input: "<<x<< "is an even number";}
            else{cout<<"Your Given Input: "<<x<<" is an odd number";}
        }else if (x<0){
            cout<<"Your given input again was a negative integer.. tumsein na ho payega beta, sudhar jaw..!"<<endl;
            cout<<"We've to convert your negative integer into absolute integer, means a positive integer using abs() function"<<endl;
            short y = abs(x);
            if(y%2==0){cout<<"Your Given Input: "<<y<< "is an even number";}
            else{cout<<"Your Given Input: "<<y<<" is an odd number";}
        }else{cout<<"Mara khaa..! hala, positive integer bujhos na ar aisos even,odd ber krte..!";}
    }else if(x>0){
        if(x%2==0){cout<<"Your Given Input: "<<x<<"is an even number";}
        else{cout<<"Your Given Input: "<<x<<" is an odd number";}
    }else{
        cout<<"Your given input integer was negative., please try again..!"<<endl;
        cout<<"Enter a positive interger number again, to find even or odd: ";
        cin>>x;
        cout<<endl;
        if(x>0){
            if(x%2==0){cout<<"Your Given Input: "<<x<< " is an even number";}
            else{cout<<"Your Given Input: "<<x<<" is an odd number";}
        }else{
            cout<<"Your given input again was a negative integer.. tumsein na ho payega beta, sudhar jaw..!"<<endl;
            cout<<"We've to convert your negative integer into absolute integer, means a positive integer using abs() function"<<endl;
            short y = abs(x);
            if(y%2==0){cout<<"Your Given Input: "<<y<< " is an even number";}
            else{cout<<"Your Given Input: "<<y<<" is an odd number";}
        }
    }
}
