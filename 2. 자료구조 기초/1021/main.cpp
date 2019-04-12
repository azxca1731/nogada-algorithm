#include <iostream>
#include <string>
#include <algorithm>
#include <deque>
using namespace std;

int main()
{
    int N, T;
    int count = 0, temp, offset;
    deque<int> dq;
    deque<int>::iterator it;

    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        dq.push_back(i);
    }

    cin >> T;

    for (int i = 0; i < T; i++)
    {
        cin >> temp;
        if (dq.front() == temp)
        {
            dq.pop_front();
        }
        else
        {
            offset = 0;
            for (it = dq.begin(); it < dq.end(); it++)
            {
                if (*it == temp)
                    break;
                offset++;
            }
            if (offset > dq.size() - offset)
            {
                while (dq.front() != temp)
                {
                    dq.push_front(dq.back());
                    dq.pop_back();
                    count++;
                }
                dq.pop_front();
            }
            else
            {
                while (dq.front() != temp)
                {
                    dq.push_back(dq.front());
                    dq.pop_front();
                    count++;
                }
                dq.pop_front();
            }
        }
    }

    cout << count << endl;
    return 0;
}