#include <iostream>
using namespace std;
int arr[65];
int main()
{

    int n, temp, tempmax;
    int count = 0;
    cin >> n;
    arr[0] = 64;

    while (true)
    {
        tempmax = 0;
        for (int i = 0; i <= count; i++)
        {
            tempmax += arr[i];
        }
        if (tempmax == n)
        {
            count++;
            break;
        }

        arr[count] = arr[count + 1] = arr[count] / 2;
        tempmax = 0;
        for (int i = 0; i <= count; i++)
        {
            tempmax += arr[i];
        }
        if (tempmax < n)
            count++;
    }
    cout << count << endl;

    return 0;
}