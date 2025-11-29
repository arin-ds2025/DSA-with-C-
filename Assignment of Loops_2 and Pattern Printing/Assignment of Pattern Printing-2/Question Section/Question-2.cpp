/*
    Take 'n' as an input and print:

     if n = 4:                           if n = 3:
          *                                  *
        *   *                              *   *
      *       *                          *       *
    *           *                          *   *
      *       *                              *
        *   *
          *     
          
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    short n;  cin>>n; cout<<endl;
    /*        1 2 3 4 5 
          1       *               we've to do this in 2 parts:    
          2     *   *              Part 1:       *            part 2:   *       *  
          3   *       *                        *   *                      *   * 
          4     *   *                                                       *
          5       *
          
          in another way, 
            the upper part hits this condition:
            if (nth_column + nth_row == n+1  or  nth_column - nth_row == n-1),then it prints stars, else spaces
            
            the lower part hits this condition:
            if (nth_row - nth_column == n-1  or nth_row + nth_column == 3*n-1),then it prints stars, else spaces
    
    */

    // for upper part
    for(short i = 1; i<=n-1;i++)cout<<"  "; cout<<" *"; cout<<endl;
    for(short i = 2; i<=n-1; i++){
            //for spaces
            for(short j = 1; j<=n-i; j++) cout<<"  ";
            cout<<" *";
            
            // for spaces
            for(short k = 1; k<=2*(i-1)-1; k++) cout<<"  ";
            cout<<" *";
            cout<<endl;
    }
    // for lower part
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


    cout<<endl<<endl<<endl;


    // in another way:
    for(short i = 1; i<=2*n-1; i++){
        for(short j = 1; j<=2*n-1; j++){
          // if(i<=n){
            // if(j+i==n+1 || j-i==n-1) cout<<"* "; // for upper part
            // else cout<<"  ";
          // }else{  
          //   if (i-j==n-1 || i+j==3*n-1) cout<<"* "; //for lower part
          //   else cout<<"  ";
          // }   
          
          // in shorter way:
          if(j+i==n+1 || j-i==n-1 || i-j==n-1 || i+j==3*n-1) cout<<"* "; // for upper part
          else cout<<"  ";
          
        } cout<<endl;

    }
}