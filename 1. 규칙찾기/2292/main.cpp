#include <iostream>
using namespace std;

int main()
{
    long long N;
    int count = 1;
    long long range = 0;
    cin >> N;
    while (range < N)
    {
        if (count % 2 == 0)
        {
            for (int i = 1; i <= count; i++)
            {
                range++;
                if (range == N)
                {
                    cout << i << "/" << count + 1 - i << endl;
                    break;
                }
            }
        }
        else
        {
            for (int i = count; i > 0; i--)
            {
                range++;
                if (range == N)
                {
                    cout << i << "/" << count + 1 - i << endl;
                    break;
                }
            }
        }

        count++;
    }
}