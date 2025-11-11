// WAP for finding the volume of cylinder by taking radius and height as input.

#include <iostream>
using namespace std;

int main(){
    // volume of a cylinder = pi * radius^2 * height

    float radius,height,volume;
    cout<<"Enter radius of cylinder: ";
    cin>>radius;
    cout<<"Enter height of cylinder: ";
    cin>>height;
    volume = 3.1416 * radius * radius * height;
    cout<<"Volume of cylinder is: "<<volume<<" "<<"Where pi = 3.1416, height = "<<height<<" and radius = "<<radius<<endl;
}