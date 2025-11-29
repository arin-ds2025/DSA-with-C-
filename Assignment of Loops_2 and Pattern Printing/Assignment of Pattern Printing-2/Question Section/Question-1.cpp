/*
    Take 'n' as an input and print these patterns:

    if n = 5, then:  or   if n = 4, then:     and      if n = 5,then:  or   n = 4, then: 

    *       *               *     *                          *                    *
     *     *                 *   *                          * *                  * * 
      *   *                   * *                          *   *                *   *
       * *                     *                          *     *              *     *
        *                                                *       *      

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    short n; cin>>n; cout<<endl; 
    // for V shape
    /*
              1 2 3 4 5 6 7 8 9     let, n = 5; here if nth_column == nth_row and nth_column == 2*n - nth_row
            1 *               *     then it prints stars , else it prints spaces
            2   *           *
            3     *       *
            4       *   *
            5         *   
    
    */
    for(short i = 1; i<=n; i++){
        for(short j = 1; j<=2*n-1; j++){
            if(j==i or j==2*n-i) cout<<" *";
            else cout<<"  ";
        }cout<<endl;
    }cout<<endl;

    // in another way:
    for(short i = 1; i<=n-1; i++){
        // for spaces
        for(short j = 1; j<i; j++) cout<<"  ";

        cout<<" *"; 

        //for spaces
        short m = 2*(n-i);
        for(short k = 1; k<m; k++) cout<<"  ";

        cout<<" *"; cout<<endl;
    }
    for(short i = 1; i<=n-1;i++) cout<<"  "; cout<<" *";

    
    cout<<endl<<endl<<endl<<endl;


    // for /\ shape:
    /*
                1 2 3 4 5 6 7 8 9
            1           *                here, if nth_row + nth_column == n+1 and 
            2         *   *              nth_column - nth_row == n-1 then it prints stars, else spaces
            3       *       *  
            4     *           *
            5   *               * 
    */
    for(short i = 1; i<=n; i++){
        for(short j = 1; j<=2*n-1; j++){
            if(j+i==n+1 || j-i==n-1) cout<<" *";
            else cout<<"  ";
        }cout<<endl;
    }
}