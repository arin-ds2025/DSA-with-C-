// Trapping Rain Water (LeetCode-42)

#include<bits/stdc++.h>
using namespace std;

void displayVec(vector<int>& a)
{
    short s = a.size();
    cout << "The array is: ";
    for (short i = 0; i < s; i++) cout << a[i] << " ";
    cout << endl<< endl;
}

vector<int> prevGretVec(vector<int>& v){
    short s = v.size();

    vector<int> pgv(s,-1);
    
    int maxV = v[0];
    for(short i = 0; i<s; i++){
        pgv[i] = maxV;

        if(v[i]>maxV){
            maxV = v[i];
        }
    }

    return pgv;
}

vector<int> nextGretVec(vector<int>& v){
    short s = v.size();

    vector<int> ngv(s,-1);
    
    int minV = v[0];
    for(short i = s-1; i>=0; i--){
        ngv[i] = minV;

        if(v[i]>minV){
            minV = v[i];
        }
    }

    return ngv;
}


void trappingRW(vector<int> n_v, vector<int> pgv, vector<int> ngv){
    short x = n_v.size(), count = 0; // the array size of n_v, pgv and ngv are same
    bool flag = 0;
    vector<int> res;

    for(short i = 0; i<x; i++){
        res.push_back(min(pgv[i],ngv[i]));
    }

    for(short i = 1; i<x-1; i++){
        if(res[i]>n_v[i]){
            count+=(res[i] - n_v[i]);
            flag = 1;
        }
    }

    if(flag==1) cout<<"The trapped rain water unit(s) : "<<count<<endl;
    else cout<<"There are no trapped rain water unit..!"<<endl;
}


vector<int> createVec(vector<int>& a, int s){
    cout << "Enter the elements of array: ";
    for (short i = 0; i < s; i++) cin >> a[i];
    cout << endl << endl;

    return a;
}

int main(){
    short x;
    cout<<"Enter the array size: "; cin>>x; cout<<endl;
    vector<int> v(x);
    createVec(v,x);
    cout<<"After created, "<<endl;
    displayVec(v);

    
    vector<int> v2 = prevGretVec(v);
    cout<<"After pre-changes, "<<endl;
    displayVec(v2); 

    vector<int> v3 = nextGretVec(v);
    cout<<"After next-changes, "<<endl;
    displayVec(v3);

    trappingRW(v,v2,v3);
}