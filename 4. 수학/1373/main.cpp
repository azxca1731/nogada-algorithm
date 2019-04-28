#include <iostream>
using namespace std;
int arr[1000000];
int main()
{
    string buffer;
    cin >> buffer;
    if (buffer.length() == 1 && buffer[0] == '0')
    {
        cout << "0" << endl;
        return 0;
    }
    int output, i, count = 0;

    for (i = buffer.length() - 1; i - 2 >= 0; i -= 3)
    {
        int T = 0;
        int K = 4;
        output = 0;
        while (T < 3)
        {
            if (buffer[i + T - 2] - '0' == 1)
            {
                output += K;
            }
            K /= 2;
            T++;
        }
        arr[count++] = output;
    }
    int k = 1;
    output = 0;
    for (int j = i; j >= 0; j--)
    {
        if (buffer[j] - '0')
            output += k;
        k *= 2;
    }
    if (output != 0)
        arr[count++] = output;
    for (int i = count - 1; i >= 0; i--)
    {
        cout << arr[i];
    }
    cout << endl;
    return 0;
}