
#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Enter a number from 1 through 10: ";
    cin >> number;

    if (number < 1 || number > 10)
    {
        cout << "Invalid input. Please enter a number between 1 and 10." << endl;
    }
    else
    {
        switch (number)
        {
        case 1:
            cout << "Roman numeral: I" << endl;
            break;
        case 2:
            cout << "Roman numeral: II" << endl;
            break;
        case 3:
            cout << "Roman numeral: III" << endl;
            break;
        case 4:
            cout << "Roman numeral: IV" << endl;
            break;
        case 5:
            cout << "Roman numeral: V" << endl;
            break;
        case 6:
            cout << "Roman numeral: VI" << endl;
            break;
        case 7:
            cout << "Roman numeral: VII" << endl;
            break;
        case 8:
            cout << "Roman numeral: VIII" << endl;
            break;
        case 9:
            cout << "Roman numeral: IX" << endl;
            break;
        case 10:
            cout << "Roman numeral: X" << endl;
            break;
        }
    }

    return 0;
}
