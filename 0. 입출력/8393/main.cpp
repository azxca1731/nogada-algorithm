#include <iostream>
#include <string>
using namespace std;
int recur(int n)
{
    if (n == 1)
        return 1;
    else
        return recur(n - 1) + n;
}
int main()
{
    int N;
    cin >> N;

    cout << recur(N) << endl;
    return 0;
}