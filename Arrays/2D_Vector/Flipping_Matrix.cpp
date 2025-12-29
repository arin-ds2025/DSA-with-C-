// Score after flipping matrix  (LeetCode-861)

#include<bits/stdc++.h>
using namespace std;

void display(vector< vector<int> >& v){
    cout<<"the matrix is: "<<endl;
    for(short i = 0; i<v.size(); i++){
        for(short j = 0; j<v[0].size(); j++){
            cout<<v[i][j]<<" ";
        }cout<<endl;
    }cout<<endl<<endl;
}


void flipMatWithMaxScore(vector< vector<int> >& a){
    short r = a.size(), c = a[0].size();

    // making the first column all 1's
    for(short i = 0; i<r; i++){
        if(a[i][0]==0){
            for(short j = 0; j<c; j++){
                if(a[i][j]==0) a[i][j] = 1;
                else a[i][j] = 0;
            }
        }
    }

    // flip the columns where noz > noo. 
    for(short j = 0; j<c; j++){
        short noo = 0, noz = 0;
        for(short i = 0; i<r; i++){
            if(a[i][j]==1) noo++;
            else noz++;
        }

        if(noz>noo){
            for(short i = 0; i<r; i++){
                if(a[i][j]==0) a[i][j] = 1;
                else a[i][j] = 0;
            }
        }
    }

    // now calculate the highest score
    short h_s = 0;
    for(short i = 0; i<r; i++){
        short p = 1;
        for(short j = c-1; j>=0; j--){ // we've to calculate from end for each row
            h_s += a[i][j]*p;
            p*=2;
        }
    }

    cout<<"After flipping,"<<endl; display(a);
    cout<<"The highest score is now: "<<h_s<<endl;
}


void createMat(vector< vector<int> >& b, short m, short n){
    cout<<"Enter elements of your matrix with only (0,1):"<<endl;
    for(short i = 0; i<m; i++){
        for(short j = 0; j<n; j++){
            cin>> b[i][j];
        }
    }cout<<endl<<endl;
}

int main(){
    short x1,x2; 
    cout<<"Enter the row of the matrix: "; cin>>x1; cout<<endl;
    cout<<"Enter the column of the matrix: "; cin>>x2; cout<<endl;
    vector< vector<int> > v(x1,vector<int>(x2));
    createMat(v,x1,x2);
    
    cout<<"After created,"<<endl; display(v);

    flipMatWithMaxScore(v);
}