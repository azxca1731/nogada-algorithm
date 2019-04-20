#include <iostream>
#include <algorithm>
using namespace std;
int first[20];
int second[20];
int main()
{
    int n, kim, lim;
    int j;
    cin >> n >> first[1] >> second[1];
    j = 1;
    for (int i = 1; i <= n; i *= 2)
    {
        first[j + 1] = (first[j] + 1) / 2;
        j++;
    }
    j = 1;
    for (int i = 1; i <= n; i *= 2)
    {
        second[j + 1] = (second[j] + 1) / 2;
        j++;
    }

    j = 1;
    for (int i = 1; i <= n; i *= 2)
    {
        if (((first[j] + 1) / 2) == ((second[j] + 1) / 2))
        {
            break;
        }
        j++;
    }
    cout << j << endl;

    return 0;
}