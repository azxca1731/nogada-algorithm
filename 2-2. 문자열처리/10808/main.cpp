#include <iostream>
#include <string>
using namespace std;
int arr[26];
int main()
{
    string buffer;
    cin >> buffer;
    for (int i = 0; i < buffer.length(); i++)
    {
        arr[buffer[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}