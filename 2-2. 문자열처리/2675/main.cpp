#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    string buffer;
    int alphabet[26];
    cin >> buffer;
    memset(alphabet, -1, sizeof(alphabet));
    for (int i = 0; i < buffer.length(); i++)
    {
        if (alphabet[buffer[i] - 'a'] != -1)
            continue;
        alphabet[buffer[i] - 'a'] = i;
    }
    for (int i = 0; i < 26; i++)
    {
        cout << alphabet[i] << " ";
    }
    cout << endl;
    return 0;
}