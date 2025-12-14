/*
    Find the error:
*/

#include<bits/stdc++.h>
using namespace std;

double getAverage(int arr[], int size);

int main(){
    int balance[5] = {1000,2,3,200,5};
    double avg = getAverage(balance[0],5); // error will be here, cause balance[0] is an integer type data
    cout<<"Average value is: "<<avg;

    return 0;
}