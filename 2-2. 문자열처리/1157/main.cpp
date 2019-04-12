#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int arr[26];
int arr2[26];
int main()
{
    string buffer;
    bool big;
    int maximum = -1;
    cin >> buffer;
    for (int i = 0; i < buffer.length(); i++)
    {
        if ('a' <= buffer[i] && buffer[i] <= 'z')
        {
            arr[buffer[i] - 'a']++;
            arr2[buffer[i] - 'a']++;
        }
        else
        {
            arr[buffer[i] - 'A']++;
            arr2[buffer[i] - 'A']++;
        }
    }

    sort(arr, arr + 26);
    // for (int i = 0; i < 26; i++)
    // {
    //     cout << arr[i] << endl;
    // }

    if (arr[24] == arr[25])
    {
        cout << "?" << endl;
    }
    else
    {
        for (int i = 0; i < 26; i++)
        {
            if (arr[25] == arr2[i])
            {
                cout << (char)(i + 'A') << endl;
                break;
            }
        }
    }

    return 0;
}