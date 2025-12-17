/* 
    Sort the array of 0's , 1's ans 2's (this is problem num 75 of LeetCode.. main Q. is Sort Colors)
    0 represets red, 1 represents white and 2 represents blue.
*/

#include<bits/stdc++.h>
using namespace std;

// Approach-1
void displayArr1(vector<string> a)
{
    int s = a.size();
    cout << "The sorted array is: {";
    for (short i = 0; i < s; i++){
        if(i==s-1) cout<<a[i];
        else cout << a[i] << " , ";
    }    
    cout<<"}"<<endl<<endl;
}

// Approach-2
void displayArr2(vector<int> a)
{
    int s = a.size();
    cout << "The sorted array is: {";
    for (short i = 0; i < s; i++){
        if(i==s-1) cout<<a[i];
        else cout << a[i] << " , ";
    }    
    cout<<"}"<<endl<<endl;
}

// Approach-1 (with two passes or more.. means using loops two times or more)
void sorting1(int a[], short x){
    short noz = 0, noo = 0, noT = 0; // noz = number of zeros, noT = number of twos
    vector<string> v;
    for(short i = 0; i<x; i++){
        if(a[i]==0) noz++;
        else if(a[i]==1) noo++;
        else if(a[i]==2) noT++;
    }

    // This will not work properly, cause if user give a value like 2,3,4,-1,-2 etc those are considered as 2
    for(short i = 0; i<x; i++){
        if(i<noz && i>=0) v.push_back("Red");
        else if(i<(noz+noo) && i>=0) v.push_back("White");
        else v.push_back("Blue");
    }

    // This will work event after get other values from user, like 2,3,4,-1,-2 etc.. only 0's , 1's and 2's will be taken
    // for(short i = 0; i<noz; i++){
    //     v.push_back("Red");
    // }
    // for(short i = 0; i<noo; i++){
    //     v.push_back("White");
    // }
    // for(short i = 0; i<noT; i++){
    //     v.push_back("Blue");
    // }

    cout<<"With Approach-1(Using two or more passes:)"<<endl;
    displayArr1(v);
}


// Approach-2(with one pass.. more optimized.. this approach is called 'three pointer algorithm' or 'Dutch flag algorithm')
void sorting2(vector<int>& a){
    /*
        We've to thing about mid, always:
        here,
            0 to lo-1 should be 0, 
            hi+1 to end should be 2,
            lo to mid-1 should be 1
    */

    short lo = 0, mid = 0, hig = a.size()-1;
    while(mid<=hig){
        if(a[mid]==2){
            short temp = a[mid];
            a[mid] = a[hig];
            a[hig] = temp;
            hig--;
        }    
        else if(a[mid]==0){
            short temp = a[mid];
            a[mid] = a[lo];
            a[lo] = temp;
            lo++;
            mid++;
        }
        else mid++; // or else if(a[mid]==1) mid++;
    }

    cout<<"With Approach-2(Using one pass or Dutch flag algo:)"<<endl;
    displayArr2(a);
}


void createArrAndProcesses(int a[], int s)
{
    cout << "Enter the elements of array: ";
    for (short i = 0; i < s; i++)
        cin >> a[i];
    cout << endl << endl;
    cout << "Before sorting of 0's and 1's: " << endl;
    sorting1(a,s);
}

int main(){
    // with Approach-1(using two passes or more)
    int s, arr[s]; cout<<"Enter the array size: "; cin>>s; cout<<endl;
    createArrAndProcesses(arr,s); 
    cout<<endl;

    // with Approach-2(using one pass)
    short x; cout<<"Enter the vector size: "; cin>>x; cout<<endl;
    vector<int> v(x);
    cout<<"Insert elements of vector: ";
    for(short i = 0; i<x; i++) cin>>v.at(i); cout<<endl<<endl;
    sorting2(v);
}