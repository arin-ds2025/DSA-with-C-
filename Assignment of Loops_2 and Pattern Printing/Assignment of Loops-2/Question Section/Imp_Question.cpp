/*
    Write a program to print out all Armstrong numbers between 1 and 500. (if sum of cubes of each digit of the
    number is equal to the number itself, then the number is called an Armstrong number.)
    for example 153 = (1*1*1) + (5*5*5) + (3*3*3)   

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Armstrong numbers between 1 and 500 are: "<<endl;
    for(int n = 1; n<=500; n++){
        int sum = 0;
        int temp = n;
        while(temp){
            int digit = temp % 10;
            sum+= digit * digit * digit;
            temp /= 10;
        }
        if(sum == n) cout<<n<<" ";
    }
    
}