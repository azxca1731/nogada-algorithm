#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, temp;
    cin >> a >> b;
    int i = a, j = b;
    while (i % j != 0)
    {
        temp = i % j;
        i = j;
        j = temp;
    }
    cout << j << endl;
    cout << a * b / j << endl;
    return 0;
}