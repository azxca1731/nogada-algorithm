#include <iostream>
#include <queue>
#include <utility>
#include <algorithm>
using namespace std;
int main()
{
    int T, M, N;
    int temp;
    int count;
    cin >> T;
    while (T--)
    {
        priority_queue<int> pq;
        queue< pair<int, int> > qu;

        count = 0;

        cin >> N >> M;
        for (int i = 0; i < N; i++)
        {
            cin >> temp;
            qu.push(make_pair(i,temp));
            pq.push(temp);
        }

        while (!qu.empty())
        {
            int loc = qu.front().first;
            int val = qu.front().second;
            qu.pop();
            if (val == pq.top())
            {
                pq.pop();
                count++;
                if (loc == M)
                {
                    cout << count << endl;
                    break;
                }
            }
            else
            {
                qu.push(make_pair(loc,val));
            }
        }
    }
}