#include <iostream>
using namespace std;

int main()
{
    int T, k, n; //테스트 케이스 , 층 수, 호 수
    int arr[15][15] = {
        0,
    };
    for (int i = 1; i < 15; i++)
    {
        arr[0][i] = i;
    }
    for (int i = 1; i < 15; i++)
    {
        for (int j = 1; j < 15; j++)
        {
            for (int k = 1; k <= j; k++)
            {
                arr[i][j] += arr[i - 1][k];
            }
        }
    }
    cin >> T;
    while (T--)
    {
        cin >> k >> n;
        cout << arr[k][n] << endl;
    }
    return 0;
}