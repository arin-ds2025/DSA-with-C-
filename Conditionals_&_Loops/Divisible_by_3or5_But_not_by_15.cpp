#include <iostream>
using namespace std;

int main()
{
    short x;
    cout << "Enter a number: ";
    cin >> x;
    cout << endl;
    // if (x == 0)
    // {
    //     cout << "0 can't be the input..try later," << endl
    //          << "cause you're a classical stupid,learn basic maths first";
    // }
    // else
    // {
    //     if (x % (3 * 5) != 0 && (x % 3 == 0 || x % 5 == 0) && x!=0)
    //     {
    //         if (x % 3 == 0)
    //         {
    //             cout << x << " is divisible by 3";
    //         }
    //         else if (x % 5 == 0)
    //         {
    //             cout << x << " is divisible by 5";
    //         }
    //     }
    //     else if(x%15==0 || x!=0)
    //     {
    //         cout << x << " is divisible by 15, so try another number..!" << endl;
    //         cout << "Enter another number: ";
    //         cin >> x;
    //         cout << endl;
    //         if (x % (3 * 5) != 0)
    //         {
    //             if (x % 3 == 0)
    //             {
    //                 cout << x << " is divisible by 3";
    //             }
    //             else if (x % 5 == 0)
    //             {
    //                 cout << x << " is divisible by 5";
    //             }
    //         }
    //         else
    //         {
    //             cout << x << " is still divisible by 15.. so mara khaw..!";
    //         }
    //     }
    // }

    if(x%3==0 || x%5==0){
        if(x%15!=0 && x!=0){cout<<x<<" is divisible by 3 or 5 but not by 15";}
        else{cout<<"Condition doesn't match";}
    }else{cout<<"Condition doesn't match";}
}