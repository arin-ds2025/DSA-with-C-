#include<bits/stdc++.h>
using namespace std;

int main(){
    // first declare and then initialize,, this is for, if we know the size and want to insert the values in that array menually
    int arr[5]; // 5 is the size of that array
    cin>>arr[0]; // we can take an input of an array like this
    arr[4] = 10;  // we can initialize values with indexing array like this.. and it starts with 0 
    cout<<"arr[0] = "<<arr[0]<<"  and arr[4] = "<<arr[4]<<endl;

    // instant initialization
    int arr2[4] = {2,5,8,0};
    cout<<"arr2[0} = "<<arr2[0]<<" and arr2[3] = "<<arr2[3]<<endl;

    // we can do this also (only for instant initilaization): (if we don't know what will be the size of array)
    char arr3[] = {'A','r','i','n',' ','A','h','m','e','d'}; // the size of array will be taken autometically 
    cout<<"arr3[5] = "<<arr3[5]<<" and arr3[7] = "<<arr3[7]<<endl;


}