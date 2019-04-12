#include <iostream>
#include <string>
using namespace std;

int main()
{
    int count = 0;
    int arr[27] = {
        3, 3, 3,
        4, 4, 4,
        5, 5, 5,
        6, 6, 6,
        7, 7, 7,
        8, 8, 8, 8,
        9, 9, 9,
        10, 10, 10, 10};
    string buffer;

    cin >> buffer;
    for (int i = 0; i < buffer.length(); i++)
    {
        count += arr[buffer[i] - 'A'];
    }
    cout << count << endl;
    return 0;
}