#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    int i = a, j = b, temp;
    while (i % j != 0)
    {
        temp = i % j;
        i = j;
        j = temp;
    }
    return j;
}
int main()
{
    int T, N;
    cin >> T;
    while (T--)
    {
        int arr[100];
        long long sum = 0;
        cin >> N;
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < N; i++)
        {
            for (int j = i + 1; j < N; j++)
            {
                sum += gcd(arr[i], arr[j]);
            }
        }
        cout << sum << endl;
    }

    return 0;
}