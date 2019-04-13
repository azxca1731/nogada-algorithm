#include <iostream>
using namespace std;
bool check[31];
int dp[31];
int recur(int n)
{
    if (check[n])
        return dp[n];
    check[n] = true;
    if (n == 2)
    {
        dp[n] = 3;
    }
    else if (n == 0)
    {
        dp[n] = 1;
    }
    else
    {
        dp[n] = 3 * recur(n - 2);
        for (int i = 0; i <= n - 4; i += 2)
        {
            dp[n] += recur(i) * 2;
        }
    }
    return dp[n];
}
int main()
{
    int N;
    cin >> N;

    if (N % 2 == 1)
        cout << 0 << endl;
    else
        cout << recur(N) << endl;

    return 0;
}