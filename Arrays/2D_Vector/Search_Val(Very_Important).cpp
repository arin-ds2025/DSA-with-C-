/*
    Write an efficient algorithm that searches for a value target in an (m x n) integer matrix
    which has the following properties:
    -> Integers in each row are sorted in ascending order from left to right.
    -> Integers in each column are sorted in ascending order from top to bottom. 

    (LeetCode-240)
*/

#include<bits/stdc++.h> 
using namespace std;

void display(vector< vector<int> >& v){
    cout<<"the matrix is: "<<endl;
    for(short i = 0; i<v.size(); i++){
        for(short j = 0; j<v[0].size(); j++){
            cout<<v[i][j]<<"  ";
        }cout<<endl;
    }cout<<endl<<endl;
}

void sorted(vector< vector<int> >& x){
    short n = x.size(), m = x[0].size();    

    // Flatten the matrix into a 1D vector
    vector<int> flat;
    flat.reserve(n * m);
    for (const auto& row : x) {
        flat.insert(flat.end(), row.begin(), row.end());
    }

    // Sort the flattened vector in ascending order
    sort(flat.begin(), flat.end());

    // Copy the sorted elements back into the matrix in row-major order
    auto it = flat.begin();
    for (auto& row : x) {
        for (auto& elem : row) {
            elem = *it++;
        }
    }   
}


bool searchVal(vector< vector<int> >& p, short x){
    short r = p.size(), c = p[0].size();
    short i = 0, j = c-1;

    while(i<r && j>=0){
        if(p[i][j]==x) return true;
        else if (p[i][j]>x) j--;
        else i++;
    }
    return false;
}


void createMat(vector< vector<int> >& b, short m, short n){
    cout<<"Enter elements of your matrix:"<<endl;
    for(short i = 0; i<m; i++){
        for(short j = 0; j<n; j++){
            cin>> b[i][j];
        }
    }cout<<endl<<endl;
}

int main(){
    short m,n,x;
    cout<<"Enter the row of the matrix: "; cin>>m; cout<<endl;
    cout<<"Enter the column size of the matrix: "; cin>>n; cout<<endl;

    vector< vector<int> > v(m,vector<int>(n));

    createMat(v,m,n);

    cout<<"After created,"<<endl; display(v);

    sorted(v); 
    cout<<"After sorted,"<<endl; display(v);

    cout<<"Enter the value you're searching for: "; cin>>x; cout<<endl;
    cout<<"The value ("<<x<<") is in that vector: "<<searchVal(v,x)<<endl;
}