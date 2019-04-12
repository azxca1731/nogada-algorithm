#include <iostream>
using namespace std;
bool visit[1001];
long long value[1001] = {0, 1, 3};
long long dp(int n)
{
    if (visit[n])
    {
        return value[n];
    }
    visit[n] = true;
    if (n <= 2)
    {
        return value[n];
    }
    else
    {
        value[n] = (dp(n - 1) + 2 * dp(n - 2)) % 10007;
        return value[n];
    }
}
int main()
{
    int n;
    cin >> n;
    cout << dp(n) << endl;
    return 0;
}