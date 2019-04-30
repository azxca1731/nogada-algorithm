#include <iostream>
using namespace std;
bool arr[1000000];
int main()
{
    int a, b;
    cin >> a >> b;
    arr[1] = true;
    for (int i = 2; i * i <= b; i++)
    {
        if (arr[i]) // 이미 체크된 수의 배수는 확인하지 않는다
            continue;
        for (int j = i + i; j <= b; j += i)
        { // i를 제외한 i의 배수들은 0으로 체크
            arr[j] = true;
        }
    }

    for (int i = a; i <= b; i++)
    {
        if (!arr[i])
            cout << i << endl;
    }
    return 0;
}