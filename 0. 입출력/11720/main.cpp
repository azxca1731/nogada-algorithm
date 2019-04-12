#include <iostream>
#include <string>
using namespace std;
int main()
{
    char buffer;
    int N;
    int sum = 0;
    cin >> N;
    while (N--)
    {
        cin >> buffer;
        sum += buffer - '0';
    }
    cout << sum << endl;
    return 0;
}