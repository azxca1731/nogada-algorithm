#include <iostream>
using namespace std;

int main()
{
    int N;
    int count = 1;
    long long range = 1;
    cin >> N;
    while (range < N)
    {
        range += count++ * 6;
    }
    cout << count << endl;

    return 0;
}