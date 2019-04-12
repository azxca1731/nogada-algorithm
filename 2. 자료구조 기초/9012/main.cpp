#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    int T;
    string buffer;
    cin >> T;
    bool check;
    while (T--)
    {
        stack<bool> stack;
        cin >> buffer;
        check = false;
        for (int i = 0; i < buffer.size(); i++)
        {
            if (buffer[i] == '(')
            {
                stack.push(true);
            }
            else
            {
                if (stack.empty())
                {
                    check = true;
                    cout << "NO" << endl;
                    break;
                }
                stack.pop();
            }
        }
        if (!check)
        {
            if (stack.empty())
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}