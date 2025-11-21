/*
    Print the sum of this series: 1 - 2 + 3 - 4 + 5 - 6.... upto n
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    /*
        formula: a+(n-1)d
        here, a = 1, d = 1
        so, 
            1+(n-1)1 = n
    */
   short n,sum=0; cout<<"Enter the value of n: "; cin>>n; cout<<endl;
    for(short m = 1; m<=n; m++){
        if(m%2 != 0) sum+=m;
        if(m%2 == 0) sum-=m;
    }
    
    (n == 0) ? cout<<"Ghorar dim.., Dhonnobad for boldami..!" : cout<<"The sum of this series (1-2+3-4+5-6... upto "<<n<<" is : "<<sum;
    cout<<" >--in another way(without using loop)--> ";

    // in another ways
    /*
        if n is even:         (1-2) + (3-4) + (5-6) + (7-8)....((n-1)-n)
      the value of each pair:   -1  +   -1  +   -1  +   -1 ....   -1     , it comes -n/2 times   , -n for each time it comes -1
        so, sum += (-n/2);

        if n is odd:          (1-2) + (3-4) + (5-6) + 7  ,  last digit will be always positive odd number
      the value of each pair:   -1  +   -1  +   -1  + n  ,  it comes (-n/2)+n times
        so, sum += (-n/2)+n;    

    */
    short sum2 = 0;
    if(n%2==0) sum2 += (-n/2);
    else if(n%2!=0) sum2 += ((-n/2)+n); // or sum2+=(n/2); cause (-n/2)+n = n/2
    (n == 0) ? cout<<"Ghorar dim.!" : cout<<sum2;
    
    

}