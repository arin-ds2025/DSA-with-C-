/* 
    Sort the array of 0's and 1's
*/

#include <bits/stdc++.h>
using namespace std;

void displayArr(int a[], int s)
{
    cout << "The array is: ";
    for (short i = 0; i < s; i++)
        cout << a[i] << " ";
    cout << endl
         << endl;
}

// if mixed array
void sortZerosAndOnes1(int a[], int x)
{
    vector<int> v;
    int a2[x], count = 0;

    for (short i = 0; i < x; i++)
    {
        if (a[i] == 0)
        {
            v.push_back(a[i]);
            count++;
        }
    }
    
    for (short j = 0; j < x; j++)
    {
        if (a[j] == 1)
        {
            v.push_back(a[j]);
            count++;
        }
    }

    for (short k = 0; k < count; k++)
    {
        a2[k] = v[k];
    }

    cout << "After sorting of 0's and 1's (with mixed array): " << endl;
    displayArr(a2, count);
}

void createArrAndProcesses(int a[], int s)
{
    cout << "Enter the elements of array: ";
    for (short i = 0; i < s; i++)
        cin >> a[i];
    cout << endl << endl;
    cout << "Before sorting of 0's and 1's: " << endl;
    displayArr(a, s);
    sortZerosAndOnes1(a, s);
}


// if only 0's and 1's are given in the array
void sortZerosAndOnes2(vector<int>& a){
    short noz = 0; // number of zeros
    short x = a.size();
    for(short i = 0; i<x; i++){
        if(a[i]==0) noz++;
    }
    for(short i = 0; i<x; i++){
        if(i<noz) a.at(i)=0;
        else a.at(i) = 1;
    }

    cout<<"After sorting of 0's and 1's, the array is: ";
    for(short i = 0; i<x; i++) cout<<a[i]<<" "; cout<<endl<<endl;

}

int main()
{
    // if given a mixed array
    int size, arr[size];
    cout << "Enter the array size: ";
    cin >> size;
    cout << endl;
    createArrAndProcesses(arr, size);

    // if given an arrya with only 0's and 1's with unsorted
    int s;
    cout<<"Enter the array2 size: "; 
    cin>> s;
    cout<<endl;
    vector<int> v(s);
    cout<<"Enter elements: ";
    for(short i = 0; i<s; i++) cin>>v[i]; cout<<endl;
    sortZerosAndOnes2(v);
    
}