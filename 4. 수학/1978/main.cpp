#include <iostream>
using namespace std;
bool arr[1001];
int main()
{
    int n = 1000;
    arr[1] = true;
    for (int i = 2; i * i <= n; i++)
    {
        if (arr[i]) // 이미 체크된 수의 배수는 확인하지 않는다
            continue;
        for (int j = i + i; j <= n; j += i)
        { // i를 제외한 i의 배수들은 0으로 체크
            arr[j] = true;
        }
    }

    int temp, count = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (!arr[temp])
            count++;
    }

    cout << count << endl;
    return 0;
}