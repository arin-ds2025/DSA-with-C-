#include <bits/stdc++.h> // we can also use this header to include all dependency libraries
using namespace std;

int main()
{
    /*
        swtich(integer expression){
            case constant_1:
                do this;
            case constant_2:
                do this;
            case constant_3:
                do this;
            ................
            ................
            default:
                do this;

        }
    */

    short x;
    cout << "Enter a number between(1-7) ,..: ";
    cin >> x;
    switch (x)
    {
    case 1:
        cout << x << " : This is Sunday";
        break;
    case 2:
        cout << x << " : This is Monday";
        break;
    case 3:
        cout << x << " : This is Tuesday";
        break;
    case 4:
        cout << x << " : This is Wednesday";
        break;
    case 5:
        cout << x << " : This is Thursday";
        break;
    case 6:
        cout << x << " : This is Friday";
        break;
    case 7:
        cout << x << " : This is Saturday";
        break;
    default:
        cout << "Invalid Input..Remember, 7 day in a week." << endl
             << "So, give a valid input between (1-7)";
    }
}
