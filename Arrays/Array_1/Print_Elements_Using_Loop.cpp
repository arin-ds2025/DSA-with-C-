#include<bits/stdc++.h>
//#include<iterator> // for std::size .. get the size of array... in that universal header(bits/std++.h),, all thing are included already
using namespace std; 

int main(){
    char name[] = {'A','r','i','n'};

    //menually:
    cout<<name[0]<<name[1]<<name[2]<<name[3]<<endl;

    // with loop (if we know the size of array)
    for(short i = 0; i<=3; i++) cout<<name[i]; cout<<endl;

    // with loop (if we don't know the size of array)... we can get the size of an array by sizeof(array) / sizeof(array[0])
    short size = sizeof(name)/sizeof(name[0]);
    cout<<"Size of that array: "<<size<<endl;
    for(short i = 0; i<=size-1; i++) cout<<name[i]; cout<<endl; 

    // we can also get the lenth or size of the array using std::size(array_name).. and for that we've to include<iterator>
    short size2 = std::size(name);
    cout<<"The size of name array, using std::size(name) method: "<<size2;
}