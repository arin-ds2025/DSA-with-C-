/*
    Input a string of even length and reverse the second half of the string
*/

#include<bits/stdc++.h>
using namespace std;

void myRev(string& st){
    short mid = st.size() / 2, end = st.size() - 1;
    for(short i = mid; i < mid + (end - mid + 1)/2; i++){
        short tmp = st[i];
        st[i] = st[end - (i - mid)];
        st[end - (i - mid)] = tmp;
    }
    cout << "With myRev function: " << st << endl;
}

int main(){
    string st1,st2; cout<<"Enter the string: "; cin>>st1; cout<<endl; st2 = st1;
    short s = st1.size();
    if(s%2==0){
        reverse(st1.begin()+s/2 , st1.end());
        cout<<"With in-built function: "<<st1<<endl;

        myRev(st2);
    }else cout<<"Enter a string, has even length"<<endl;
}