#include <iostream>
using namespace std;

int main()
{
    long long N;
    long long start, end;
    long long length;
    long long n;

    cin >> N;
    while (N--)
    {
        cin >> start >> end;
        length = end - start;
        n = 1;
        while (1)
        {
            long long doubleN = n * n;
            long long min = doubleN - n + 1;
            long long max = doubleN + n;
            if (min <= length && length <= max)
            {
                if (min <= length && length <= doubleN)
                {
                    cout << 2 * n - 1 << endl;
                }
                else
                    cout << 2 * n << endl;
                break;
            }
            n++;
        }
    }
    return 0;
}