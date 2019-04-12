#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main()
{
    string buffer;
    const int smallLeft = 44000000; //(
    const int bigLeft = 44000002;   //[
    int sum;

    stack<int> stack;
    cin >> buffer;
    bool impossible = false;
    for (int i = 0; i < buffer.size(); i++)
    {
        switch (buffer[i])
        {
        case '(':
            stack.push(smallLeft);
            break;
        case ')':
            if (stack.empty())
            {
                impossible = true;
                break;
            }
            if (stack.top() == smallLeft)
            {
                stack.pop();
                stack.push(2);
            }
            else
            {
                sum = 0;
                while (!stack.empty() && stack.top() != smallLeft)
                {
                    sum += stack.top();
                    stack.pop();
                }
                if (stack.empty())
                {
                    impossible = true;
                    break;
                }
                stack.pop();
                stack.push(sum * 2);
            }

            break;
        case '[':
            stack.push(bigLeft);
            break;
        case ']':
            if (stack.empty())
            {
                impossible = true;
                break;
            }
            if (stack.top() == bigLeft)
            {
                stack.pop();
                stack.push(3);
            }
            else
            {
                sum = 0;
                while (!stack.empty() && stack.top() != bigLeft)
                {
                    sum += stack.top();
                    stack.pop();
                }
                if (stack.empty())
                {
                    impossible = true;
                    break;
                }
                stack.pop();
                stack.push(sum * 3);
            }
            break;
        default:
            break;
        }
    }

    sum = 0;
    while (!stack.empty())
    {
        if (stack.top() == bigLeft || stack.top() == smallLeft)
        {
            impossible = true;
            break;
        }
        sum += stack.top();
        stack.pop();
    }
    if (impossible)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << sum << endl;
    }

    return 0;
}