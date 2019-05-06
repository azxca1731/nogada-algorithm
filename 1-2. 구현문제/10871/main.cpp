#include <iostream>
#include <algorithm>
using namespace std;
int arr[10001];
int main()
{
    int N, MAX, temp, count = 0;
    cin >> N >> MAX;
    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        if (MAX > temp)
            arr[count++] = temp;
    }
    for (int i = 0; i < count; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}