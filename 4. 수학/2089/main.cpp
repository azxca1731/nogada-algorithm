#include <iostream>
using namespace std;
bool arr[1000000];
int main()
{
    int n, count = 0;
    cin >> n;
    if (n == 0)
    {
        cout << 0 << endl;
        return 0;
    }
    while (n != 0)
    {
        int a = n % -2;
        int next = n / -2;
        if (n < 0 && a == -1)
        {
            next++;
        }
        if (a == 0)
            arr[count++] = false;
        else
            arr[count++] = true;
        n = next;
    }

    for (int i = count - 1; i >= 0; i--)
    {
        if (arr[i])
            cout << "1";
        else
            cout << "0";
    }
    cout << endl;

    return 0;
}