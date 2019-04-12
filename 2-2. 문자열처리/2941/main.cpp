#include <iostream>
#include <string>
using namespace std;

int main()
{
    string buffer;
    int count = 0;
    cin >> buffer;
    for (int i = 0; i < buffer.length(); i++)
    {
        switch (buffer[i])
        {
        case 'c':
            if (buffer[i + 1] == '=')
            {
                i++;
            }
            else if (buffer[i + 1] == '-')
            {
                i++;
            }
            count++;
            break;
        case 'd':
            if (buffer[i + 1] == 'z' && buffer[i + 2] == '=')
            {
                i++;
                i++;
            }
            else if (buffer[i + 1] == '-')
            {
                i++;
            }
            count++;
            break;
        case 'l':
            if (buffer[i + 1] == 'j')
            {
                i++;
            }
            count++;
            break;
        case 'n':
            if (buffer[i + 1] == 'j')
            {
                i++;
            }
            count++;
            break;
        case 's':
            if (buffer[i + 1] == '=')
            {
                i++;
            }
            count++;
            break;
        case 'z':
            if (buffer[i + 1] == '=')
            {
                i++;
            }
            count++;
            break;
        default:
            count++;
            break;
        }
    }
    cout << count << endl;

    return 0;
}