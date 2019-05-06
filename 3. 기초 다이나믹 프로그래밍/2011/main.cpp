#include <iostream>
#include <string>
using namespace std;
bool check[5001];
long long dp[5001];
string buffer;
int length;
long long recur(int n)
{
    if (check[n])
        return dp[n];
    check[n] = true;
    if (n == 0)
    {
        return dp[n] = 1;
    }
    else
    {
        if (1 <= buffer[n] && buffer[n] <= 9)
        {
            dp[n] += recur(n - 1);
        }
        int number = buffer[n - 1] * 10 + buffer[n];
        if (10 <= number && number <= 26)
        {
            dp[n] += recur(n - 2);
        }
        return dp[n] %= 1000000;
    }
}
int main()
{
    cin >> buffer;

    for (int i = buffer.length(); i > 0; i--)
    {
        buffer[i] = buffer[i - 1] - '0';
    }

    length = buffer.length();

    if (buffer.length() == 0 || buffer[0] == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << recur(buffer.length()) << endl;
    }

    return 0;
}