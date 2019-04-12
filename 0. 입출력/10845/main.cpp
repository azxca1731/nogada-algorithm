#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N;
    int arr[10000];
    int head = 0, last = 0;
    string buffer;

    cin >> N;
    while (N--)
    {
        cin >> buffer;
        if (buffer == "pop")
        {
            if (head == last)
            {
                cout << "-1" << endl;
            }
            else
            {
                cout << arr[head++] << endl;
            }
        }
        else if (buffer == "push")
        {
            cin >> arr[last++];
        }
        else if (buffer == "front")
        {
            if (head == last)
            {
                cout << "-1" << endl;
            }
            else
            {
                cout << arr[head] << endl;
            }
        }
        else if (buffer == "back")
        {
            if (head == last)
            {
                cout << "-1" << endl;
            }
            else
            {
                cout << arr[last - 1] << endl;
            }
        }
        else if (buffer == "size")
        {
            cout << (last - head) << endl;
        }
        else if (buffer == "empty")
        {
            if (head == last)
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