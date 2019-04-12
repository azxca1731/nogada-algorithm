#include <iostream>
#include <string>
#include <stack>
using namespace std;

stack<char> head, tail;

int main()
{
    string buffer;

    char op;
    char temp;
    int T; //Case
    cin >> buffer >> T;
    for (int i = 0; i < buffer.length(); i++)
    {
        head.push(buffer[i]);
    }

    while (T--)
    {
        cin >> op;
        switch (op)
        {
        case 'L':
            if (!head.empty())
            {
                tail.push(head.top());
                head.pop();
            }
            break;
        case 'D':
            if (!tail.empty())
            {
                head.push(tail.top());
                tail.pop();
            }

            break;
        case 'B':
            if (!head.empty())
            {
                head.pop();
            }
            break;
        case 'P':
            cin >> temp;
            head.push(temp);
            break;
        default:
            break;
        }
    }

    string result;
    while (!head.empty())
    {
        tail.push(head.top());
        head.pop();
    }
    while (!tail.empty())
    {
        result += tail.top();
        tail.pop();
    }

    cout << result << endl;

    return 0;
}