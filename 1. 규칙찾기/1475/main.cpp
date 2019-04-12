#include <iostream>
#include <algorithm>
using namespace std;

int arr[10];

int main()
{
    int n;
    int num = -1;
    cin >> n;

    while (true)
    {
        arr[n % 10]++;
        if (n / 10 == 0)
            break;
        n /= 10;
    }

    for (int i = 0; i < 10; i++)
    {
        if (i != 6 && i != 9)
        {
            num = max(num, arr[i]);
        }
    }

    cout << max((arr[6] + arr[9] + 1) / 2, num) << endl;

    return 0;
}