/*
    Rotate the given array 'a' by k steps, where k is non-negative

    N.B: " ...k can be greater than n as well where n is the size of array 'a'... "
*/

#include<bits/stdc++.h>
using namespace std;


vector<int> partOfRevArr(vector<int>& b, int i, int j){
    while(i<=j){
        short temp = b[i];
        b[i] = b[j];
        b[j] = temp;

        i++;
        j--;
    }
    return b;
}


void display(vector<int> v){
    for(short i = 0; i<v.size(); i++) cout<<v[i]<<" "; cout<<endl<<endl;
}



int main(){
    // mainly the number of k means , from last those elements come at first position
    /*
        example:
        arr = {1,2,3,4,5,6};
        k = 2;
        after processing:
        arr = {5,6,1,2,3,4}
    */
   /*
        let, arr = {1,2,3,4,5,6,7,8};
        k = 3;
        now we've to devide it into two parts, arr = {1,2,3,4,5} {6,7,8}
        now we've to reverse those separate parts indivisually,like {5,4,3,2,1} {8,7,6}
        then , we've to marge them , so arr now {5,4,3,2,1,8,7,6};
        now reverse the whole thing, so arr now = {6,7,8,1,2,3,4,5}; that's it

        separation:
        lets, n = v.size();
        total = n;
        first part: it'll be 0 to n-k-1 , cause we assumed last part as k
        second part: it'll be n-k to n-1 
   */

    vector<int> v1 = {1,6,2,3,7,4,8}; // we can also initialize like this
    // v1.push_back(1);
    // v1.push_back(6);
    // v1.push_back(2);
    // v1.push_back(3);
    // v1.push_back(7);
    // v1.push_back(4);
    
    // let, we want to swap just first 3 numbers
    // display(partOfRevArr(v1,0,2)); // it will return 2 6 1 3 7 4

    cout<<"Original vector, v1: "; display(v1);

    short k; cout<<"Enter steps: "; cin>>k; cout<<endl;
    if(k<0) cout<<"Invalid steps input..!.. Try again";
    else{
        vector<int> v2;
        int n = v1.size();

        //while(k>n) k = k-n; // it means if k greater then the size of vector then re-initialize k with the extra value, so that code will not crash..
        //or
        if(k>n) k%=n;  // same thing with more optimization
        // in case of this vector size (7), k = 3 and k = 10 = (10-7) = 3 are the same things and give the same vector rotation answer
        
        if(k==0 || k==n){
            display(v1);
            return 0; // means end the main function
        }


        // for first part
        partOfRevArr(v1,0,n-k-1);
        for(short i = 0; i<n-k; i++) v2.push_back(v1[i]);
        // pushBackToNewVec(v1,v2,0,n-k);

        // for second part
        partOfRevArr(v1,n-k,n-1);
        for(short i = n-k; i<n; i++) v2.push_back(v1[i]);
        // pushBackToNewVec(v1,v2,n-k,n);

        // finally
        display(partOfRevArr(v2,0,n-1));
    }

}