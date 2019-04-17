#include <iostream>
using namespace std;
bool check[201][201];
long long dp[201][201];

long long recur(int n, int k)
{
    if (check[n][k])
    {
        return dp[n][k];
    }
    check[n][k] = true;
    if (n == 1)
    {
        dp[n][k] = k;
    }
    else if (k == 1)
    {
        dp[n][k] = 1;
    }
    else
    {
        dp[n][k] = recur(n - 1, k) + recur(n, k - 1);
    }
    return dp[n][k] % 1000000000;
}

int main()
{
    int K, N;
    cin >> N >> K;

    cout << recur(N, K) << endl;
    return 0;
}