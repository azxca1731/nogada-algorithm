#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        return 0;
    }
    while (n % 2 == 0)
    {
        cout << 2 << endl;
        n /= 2;
    }
    for (int i = 3; i <= n; i += 2)
    {
        while (n % i == 0)
        {
            cout << i << endl;
            n /= i;
        }
    }
    return 0;
}