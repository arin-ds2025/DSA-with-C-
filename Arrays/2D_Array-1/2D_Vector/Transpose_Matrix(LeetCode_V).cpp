/*
    (LeetCode Version)
*/

#include<bits/stdc++.h>
using namespace std;

void display(vector<vector<int>>& v){
    int m = v.size();
    int n = v[0].size();
    cout<<"Your Created Vector is: "<<endl;
    for(short i = 0; i<m; i++){
        for(short j = 0; j<n; j++){
            cout<<v[i][j]<<" ";
        }cout<<endl;
    } cout<<endl<<endl;
}

void showTranspose(vector<vector<int>>& v){
    int m = v.size();
    int n = v[0].size();
    vector<vector<int>> arr(n,vector<int>(m));

    for(short i = 0; i<n; i++){
        for(short j = 0; j<m; j++){
            arr[i][j]=v[j][i];
        }
    }

    cout<<"The transpose form of your created vector is: "<<endl;
    for(short i = 0; i<n; i++){
        for(short j = 0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }cout<<endl<<endl;
}

vector<vector<int>> createVec(vector<vector<int>>& v, int m, int n){
    cout<<"Your row size is: "<<m<<endl;
    cout<<"Your column size is: "<<n<<endl;

    cout<<"Enter your elements: "<<endl;
    for(short i = 0; i<m; i++){
        for(short j = 0; j<n; j++){
            cin>>v[i][j];
        }
    }cout<<endl<<endl;

    return v;
}

int main(){
    short x1,x2;
    cout<<"Enter the row size: "; cin>>x1; cout<<endl;
    cout<<"Enter the column size: "; cin>>x2; cout<<endl;
    vector<vector<int>> arr(x1,vector<int> (x2)); // we've initialize the size instat, like this
    createVec(arr,x1,x2);
    display(arr);
    showTranspose(arr);
}