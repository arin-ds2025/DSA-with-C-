#include<iostream>
using namespace std;

int main(){
    int marks;
    cout<<"Enter your marks: ";cin>>marks;cout<<endl;
    if(marks<0){cout<<marks<<" is a negative integer ,so we convert it into positive integer and show your grade"<<endl;}
    if(abs(marks)>90 && abs(marks)<101){cout<<"Your Grade is : 'Excellent'";}
    else if(abs(marks)>80 && abs(marks)<91){cout<<"Your Grade is : 'Very Good'";}
    else if(abs(marks)>70 && abs(marks)<81){cout<<"Your Grade is : 'Good'";}
    else if(abs(marks)>60 && abs(marks)<71){cout<<"Your Grade is : 'Can do better'";}
    else if(abs(marks)>50 && abs(marks)<61){cout<<"Your Grade is : 'Average'";}
    else if(abs(marks)>39 && abs(marks)<51){cout<<"Your Grade is : 'Below average'";}
    else if(abs(marks)>=0 && abs(marks)<41){cout<<"Your Grade is : 'Fail'";}
    else{cout<<marks<<" is an invalid input to check grade";}
}