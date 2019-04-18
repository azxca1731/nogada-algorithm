#include <iostream>
using namespace std;
int main()
{
    int T = 3;
    string buffer;
    while (T--)
    {
        int count = 0;
        getline(cin, buffer);
        for (int i = 0; i < buffer.length(); i += 2)
        {
            if (buffer[i] == '0')
                count++;
        }
        switch (count)
        {
        case 1:
            cout << 'A' << endl;
            break;
        case 2:
            cout << 'B' << endl;
            break;
        case 3:
            cout << 'C' << endl;
            break;
        case 4:
            cout << 'D' << endl;
            break;
        case 0:
            cout << 'E' << endl;
            break;

        default:
            break;
        }
    }
    return 0;
}