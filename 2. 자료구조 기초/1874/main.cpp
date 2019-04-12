#include <iostream>
#include <stack>
using namespace std;
int arr[100001];
char op[200000];
int main()
{
    int N, count = 0;
    stack<int> mystack;
    cin >> N;
    int temp, k = 1;
    while (N--)
    {
        cin >> temp;
        for (; k <= temp; k++)
        {
            mystack.push(k);
            op[count++] = '+';
        }
        if (mystack.top() == temp)
        {
            mystack.pop();
            op[count++] = '-';
        }
        else
        {
            break;
        }
    }

    if (mystack.empty())
    {
        for (int i = 0; i < count; i++)
        {
            cout << op[i] << '\n';
        }
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}