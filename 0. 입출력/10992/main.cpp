#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int i = 1; i <= N - 1; i++)
    {
        for (int j = N - i; j > 0; j--)
        {
            cout << " ";
        }
        cout << "*";
        for (int j = 2 * (i - 1); j > 0; j--)
        {
            if (j == 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < 2 * N - 1; i++)
    {
        cout << "*";
    }
    cout << endl;

    return 0;
}