#include <iostream>
#include <string>
using namespace std;

int main()
{
    int dal[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int month;
    int day;
    int calDay = 0;
    cin >> month >> day;

    for (int i = 1; i < month; i++)
    {
        calDay += dal[i];
    }
    calDay += day;

    switch (calDay % 7)
    {
    case 0:
        cout << "SUN" << endl;
        break;
    case 1:
        cout << "MON" << endl;
        break;
    case 2:
        cout << "TUE" << endl;
        break;
    case 3:
        cout << "WED" << endl;
        break;
    case 4:
        cout << "THU" << endl;
        break;
    case 5:
        cout << "FRI" << endl;
        break;
    case 6:
        cout << "SAT" << endl;
        break;
    default:
        break;
    }
}