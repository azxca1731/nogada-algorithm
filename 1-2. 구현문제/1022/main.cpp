#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;
int arr[51][51];
int len[51][51];
int set(int x, int y)
{
    int stage = max(abs(x), abs(y));
    if (x <= 0 && y <= 0)
    {
        return 4 * stage * stage + x - y + 1;
    }
    else if (x <= 0 && y > 0)
    {
        return 4 * stage * stage - 2 * stage - x - y + 1;
    }
    else if (x > 0 && y <= 0)
    {
        return 4 * stage * stage + 2 * stage + x + y + 1;
    }
    else
    {
        if (x == stage)
        {
            return 4 * stage * stage + 3 * stage + y + 1;
        }
        else
        {
            return 4 * stage * stage - 3 * stage - x + 1;
        }
    }
}
int main()
{
    int r1, c1, r2, c2, maximum = 0;
    cin >> r1 >> c1 >> r2 >> c2;

    for (int i = r1, x = 0; i <= r2; i++, x++)
    {
        for (int j = c1, y = 0; j <= c2; j++, y++)
        {
            arr[x][y] = set(i, j);
            for (int z = arr[x][y]; z > 0; z /= 10)
            {
                len[x][y]++;
            }
            maximum = max(len[x][y], maximum);
        }
    }

    for (int i = r1, x = 0; i <= r2; i++, x++)
    {
        for (int j = c1, y = 0; j <= c2; j++, y++)
        {
            for (int z = 0; z < maximum - len[x][y]; z++)
            {
                cout << " ";
            }
            cout << arr[x][y] << " ";
        }
        cout << '\n';
    }

    return 0;
}