#include <iostream>
using namespace std;
int input[1001];
int dp[1001];
bool check[1001];
int recur(int n)
{
    if (check[n])
        return dp[n];
    check[n] = true;
    if (n == 1)
    {
        dp[1] = input[1];
        return dp[n];
    }
    else if (n == 0)
    {
        dp[0] = 0;
        return dp[0];
    }
    else
    {
        int max = 0;
        for (int i = 1; i <= n; i++)
        {
            if (max < recur(n - i) + input[i])
            {
                max = recur(n - i) + input[i];
            }
        }
        dp[n] = max;
        return dp[n];
    }
}
int main()
{
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> input[i];
    }
    cout << recur(N) << endl;

    return 0;
}