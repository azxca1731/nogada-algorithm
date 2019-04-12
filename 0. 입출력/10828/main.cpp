#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N;
    int arr[10000];
    int header = -1;
    int intBuffer;
    string buffer;

    cin >> N;
    while (N--)
    {
        cin >> buffer;
        if (buffer == "pop")
        {
            if (header <= -1)
            {
                cout << -1 << endl;
            }
            else
            {
                cout << arr[header--] << endl;
            }
        }
        else if (buffer == "push")
        {
            cin >> arr[++header];
        }
        else if (buffer == "top")
        {
            if (header <= -1)
            {
                cout << -1 << endl;
            }
            else
            {
                cout << arr[header] << endl;
            }
        }
        else if (buffer == "size")
        {
            cout << header + 1 << endl;
        }
        else if (buffer == "empty")
        {
            if (header <= -1)
            {
                cout << "1" << endl;
            }
            else
            {
                cout << "0" << endl;
            }
        }
        else
        {
            cout << "ERROR" << endl;
        }
    }
    return 0;
}