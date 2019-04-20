#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int sum = 0, maximum = 0, T = 4, temp;
    while (T--)
    {
        cin >> temp;
        sum -= temp;
        maximum = max(maximum, sum);
        cin >> temp;
        sum += temp;
        maximum = max(maximum, sum);
    }

    cout << maximum << endl;

    return 0;
}