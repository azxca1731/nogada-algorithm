#include <iostream>
#include <algorithm>
using namespace std;
int input[1001];
int decinput[1001];
bool incCheck[1001];
bool decCheck[1001];
int inc[1001];
int decr[1001];
int N;
int incRecur(int n)
{
    if (incCheck[n])
        return inc[n];
    incCheck[n] = true;
    if (n <= 1)
    {
        return inc[n] = n;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (input[i] < input[n])
                inc[n] = max(inc[n], incRecur(i) + 1);
        }
    }

    return inc[n];
}
int decRecur(int n)
{
    if (decCheck[n])
        return decr[n];
    decCheck[n] = true;
    if (n <= 1)
    {
        return decr[n] = n;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (decinput[i] < decinput[n])
                decr[n] = max(decr[n], decRecur(i) + 1);
        }
    }
    return decr[n];
}

int main()
{
    int maximum = 0;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> input[i];
        decinput[N + 1 - i] = input[i];
    }
    for (int i = 1; i <= N; i++)
    {
        maximum = max(maximum, incRecur(i) + decRecur(N + 1 - i) - 1);
    }
    cout << maximum << endl;
    return 0;
}