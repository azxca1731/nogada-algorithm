#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;
bool arr[26];
int main()
{
    int T, count = 0;
    bool check;
    string buffer;
    char left = 'A';
    cin >> T;

    while (T--)
    {
        cin >> buffer;
        memset(arr, false, sizeof(arr));
        left = buffer[0];
        check = false;
        for (int i = 0; i < buffer.length(); i++)
        {
            if (left != buffer[i])
            {
                arr[left - 'a'] = true;
                left = buffer[i];
            }
            if (arr[buffer[i] - 'a'])
            {
                check = true;
                break;
            }
        }
        if (!check)
            count++;
    }

    cout << count << endl;

    return 0;
}