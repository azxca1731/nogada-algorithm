#include <iostream>
#include <algorithm>
using namespace std;
int input[1001];
int dp[1001];
bool check[1001];
int recur(int n)
{
    if (check[n])
        return dp[n];
    check[n] = true;
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        dp[n] = 1;
    }
    else
    {
        int i = 0;
        for (i = 0; i < n; i++)
        {
            if (input[i] > input[n])
            {
                dp[n] = max(recur(i) + 1, dp[n]);
            }
        }
    }
    return dp[n];
}
int main()
{
    int N, maximum = 0;
    cin >> N;
    input[0] = 2147483647;
    for (int i = 1; i <= N; i++)
    {
        cin >> input[i];
    }

    for (int i = 0; i <= N; i++)
    {
        maximum = max(recur(i), maximum);
    }

    cout << maximum << endl;

    return 0;
}