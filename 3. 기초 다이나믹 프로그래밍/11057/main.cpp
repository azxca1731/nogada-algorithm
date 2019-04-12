#include <iostream>
using namespace std;
bool check[1001][11];
int dp[1001][11];
int recur(int n, int j)
{
    if (check[n][j])
        return dp[n][j];
    check[n][j] = true;
    if (n == 1)
    {
        dp[n][j] = 1;
    }
    else
    {
        if (j == 0)
        {
            dp[n][j] = recur(n - 1, j);
        }
        else
        {
            dp[n][j] = recur(n - 1, j) + recur(n, j - 1);
        }
    }
    return dp[n][j] % 10007;
}
int main()
{
    int N;

    cin >> N;
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += recur(N, i);
    }
    cout << sum % 10007 << endl;
    return 0;
}