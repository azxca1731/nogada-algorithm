#include <iostream>
using namespace std;

int main()
{
    string buffer;
    int n;
    int output = 0, temp;
    cin >> buffer >> n;

    for (int i = 0; i < buffer.length(); i++)
    {
        temp = buffer[i] - 'A';
        if (temp < 0)
        {
            temp = temp + 'A' - '0';
            output *= n;
            output += temp;
        }
        else
        {
            output *= n;
            output += (temp + 10);
        }
    }

    cout << output << endl;

    return 0;
}