#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int N;
    int maximum = -1000001, minimum = 1000001;
    int buffer;
    cin >> N;

    while (N--)
    {
        cin >> buffer;
        minimum = min(minimum, buffer);
        maximum = max(maximum, buffer);
    }
    cout << minimum << " " << maximum << endl;
    return 0;
}