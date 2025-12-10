/*
    Find the second largest element in the given array
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,8,2,4,9,6,7,3,0}, max = arr[0], s_max = arr[0];

    // for maximum value
    for(short i = 0; i<std::size(arr); i++){
        if(max<arr[i]) max = arr[i];
    }

    //for second maximum value
    for(short i = 0; i<std::size(arr); i++){
        if(s_max<arr[i] && arr[i]!=max) s_max = arr[i];
    }
    cout<<"The second largest element in the given array is: "<<s_max<<endl;
    
}