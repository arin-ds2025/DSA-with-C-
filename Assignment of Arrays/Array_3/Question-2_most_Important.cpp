/*
    Find the factorial of a large number.

    Hint: use an array to store every digit of answer
*/

#include<bits/stdc++.h>
using namespace std;

const int MAXD = 10000;  // Enough for factorials 


// Approach-1 (more reliable)
void displayArr1(int a[], int s){
    cout<<"The factorial is(with Approach-1): ";
    for(int i = s-1; i>=0; i--) {
        cout<<a[i];
    }
    cout<<endl<<endl;
}

// for Approach-1 (using array)
void findLargeFact1(int x){
    int arr[MAXD];
    int size = 1; // Current number of digits
    arr[0] = 1;  // Start with 1

    for(int i = 2; i<=x; i++){
        int carry = 0;

        // Multiply each digit by i
        for(int j = 0; j<size; j++){
            int product = arr[j] * i + carry;
            arr[j] = product % 10;
            carry = product / 10;
        }

        // Add remaining carry as new digits
        while(carry){
            arr[size] = carry % 10;
            carry /= 10;
            size++;
        }
    }

    displayArr1(arr, size);
    
}



// Approach-2
void displayArr2(vector<int> v, int s){
    cout<<"The factorial is(with Approach-2): ";
    for(int i = s-1; i>=0; i--) {
        cout<<v.at(i);
    }
    cout<<endl<<endl;
}

// for Approach-2 (using dynamic array or vector)
void findLargeFact2(int n){
    vector<int> ans(1,1); // it means create a vector with 1 capacity and store there 1

    while(n>1){
        int carry = 0, result , size = ans.size();
        for(short i = 0; i<size; i++){
            result = ans[i] * n + carry;
            carry = result/10; // if result = 24 then carry = 24/2 = 2, it will add to  next result , this process will be continued
            ans[i] = result%10; // this is for update the previous index with updated value (without carry)
        }

        // for the last carry after all those processes, add new index or indexes to store the carry value
        while(carry){
            ans.push_back(carry%10); // updated the vector last index or indexes with carry value or values in reverse formate
            carry/=10; // to revome that value which is already added to that vector in last index
        }

        n--; 
    }
    
    displayArr2(ans,ans.size());
}


int main(){
    /*
        134 * 5 :

        1 3 4
          * 5
        - - -
        6 7 0  , carry1 = 2 (this carry will add with 5*3 = 15+2 = 17) , carry2 = 1 (this carry will add with 5*1 = 5+1 = 6)

    */

    int x; cout<<"Enter number to find factorial: "; cin>>x; cout<<endl;

    if(x < 0) cout<<"Factorial not defined for negative numbers."<<endl<<endl;
    else if(x == 0 || x == 1) cout<<"The factorial is: 1"<<endl<<endl;
    else{
        findLargeFact1(x);
        findLargeFact2(x);
    }    
}