#include <iostream>
#include <algorithm>
#include "memory.h"
using namespace std;
int input[100001][2];
bool check[100001][2];
int dp[100001][2];
int recur(int i, int j)
{
    if (check[i][j])
        return dp[i][j];
    check[i][j] = true;
    if (i <= 1)
    {
        dp[i][j] = input[i][j];
    }
    else
    {
        dp[i][j] =
            max(recur(i - 1, 1 - j) + input[i][j], recur(i - 2, 1 - j) + input[i][j]);
    }
    return dp[i][j];
}
int main()
{
    int T, N;
    cin >> T;
    input[0][0] = input[0][1] = 0;
    while (T--)
    {
        memset(dp, 0, sizeof(dp));
        memset(check, false, sizeof(check));
        cin >> N;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 1; j <= N; j++)
            {
                cin >> input[j][i];
            }
        }

        cout << max(max(recur(N, 0), recur(N, 1)), max(recur(N - 1, 0), recur(N - 1, 1))) << endl;
    }
    return 0;
}