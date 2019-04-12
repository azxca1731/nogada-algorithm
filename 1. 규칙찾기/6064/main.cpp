#include <iostream>
#include <algorithm>
using namespace std;
int gcd(int a, int b)
{
    int c;
    while (b != 0)
    {
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}
int main()
{
    int T;
    int M, N, x, y, count;
    bool check;
    cin >> T;
    int maximum;
    while (T--)
    {
        cin >> M >> N >> x >> y;
        count = x;
        check = false;
        maximum = M * N / gcd(M, N);
        while (count <= maximum)
        {
            if (y == count % N)
            {
                check = true;
                cout << count << endl;
                break;
            }
            else if (y == N && count % N == 0)
            {
                check = true;
                cout << count << endl;
                break;
            }
            count += M;
        }
        if (!check)
            cout << -1 << endl;
    }

    return 0;
}