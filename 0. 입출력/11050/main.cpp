#include <iostream>
using namespace std;

long long choose(int n, int r)
{
    if (n == r || r == 0)
    {
        return 1;
    }

    return choose(n - 1, r - 1) + choose(n - 1, r);
}

int main()
{
    int n, k;
    cin >> n >> k;
    cout << choose(n, k) << endl;
    return 0;
}