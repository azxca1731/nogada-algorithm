#include <iostream>
#include <string>
using namespace std;

int main()
{
    int A, B;
    int N;
    string buffer;
    cin >> N;

    while (N--)
    {
        cin >> buffer;
        if (buffer[1] == ',')
        {
            cout << buffer[0] + buffer[2] - '0' - '0' << endl;
        }
    }

    return 0;
}