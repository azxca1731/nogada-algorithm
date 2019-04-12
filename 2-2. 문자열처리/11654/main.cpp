#include <iostream>
#include <string>
using namespace std;

int main()
{
    int T, N;
    string buffer;
    cin >> T;
    while (T--)
    {
        cin >> N;
        cin >> buffer;
        for (int i = 0; i < buffer.length(); i++)
        {
            for (int j = 0; j < N; j++)
            {
                cout << buffer[i];
            }
        }
        cout << endl;
    }

    return 0;
}