#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    int temp, i = a, j = b;
    while (i % j != 0)
    {
        temp = i % j;
        i = j;
        j = temp;
    }
    return j;
}
int main()
{
    int T, a, b;

    cin >> T;
    while (T--)
    {
        cin >> a >> b;
        cout << a * b / gcd(a, b) << endl;
    }
    return 0;
}