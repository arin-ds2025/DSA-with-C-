/*
 if cost price(CP) and selling price(SP) of an item is input through the keyboard, then write a
 program to determine whether the seller has made profit or incurred loss.Also determine how much
 profit he made or loss he incurred.
*/

#include <iostream>
using namespace std;

int main()
{
    int SP, CP;
    cout << "Enter the Cost Price of the item: ";
    cin >> CP;
    cout << "Enter the Selling Price of the item: ";
    cin >> SP;
    cout << endl;

    if (CP < 0 || SP < 0)
    {
        cout << "Give a positive input..!";
    }
    else
    {
        if (abs(SP) == abs(CP))
        {
            cout << "Unfortunately, You didn't get profit or incurred loss by selling that item";
        }
        else if (abs(SP) > (CP))
        {
            cout << "Congrats..!..You've made profit by selling that item" << endl
                 << "The amount of the profit is: " << abs(SP) - abs(CP) << endl;
        }
        else if (abs(CP) > abs(SP))
        {
            cout << "Oggeee..!...You've incurred loss by selling that item" << endl
                 << "The amount of the loss is: " << abs(CP) - abs(SP) << endl;
        }
        else
        {
            cout << "Mara khaa";
        }
    }
}