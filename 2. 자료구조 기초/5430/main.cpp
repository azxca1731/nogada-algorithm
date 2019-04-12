#include <iostream>
#include <cstring>
#include <deque>
#include "stdlib.h"
using namespace std;

int main()
{
    int T, N;
    bool error = false, check = false;
    char intbuffer[1000000];
    deque<int>::iterator it;

    cin >> T;
    while (T--)
    {
        deque<int> dq;
        string opbuffer;
        cin >> opbuffer;
        cin >> N;
        cin >> intbuffer;
        error = false;
        check = false;
        char *tok = strtok(intbuffer, "[,]");
        while (tok != NULL)
        {
            dq.push_back(stoi(tok));
            tok = strtok(NULL, "[,]");
        }
        for (int i = 0; i < opbuffer.length(); i++)
        {
            if (opbuffer[i] == 'R')
            {
                check = !check;
            }
            else
            {
                if (dq.empty())
                {
                    error = true;
                    break;
                }
                if (check)
                    dq.pop_back();
                else
                    dq.pop_front();
            }
        }
        if (error)
            cout << "error" << endl;
        else
        {
            cout << "[";
            while (!dq.empty())
            {
                if (!check)
                {
                    cout << dq.front();
                    dq.pop_front();
                }
                else
                {
                    cout << dq.back();
                    dq.pop_back();
                }
                if (!dq.empty())
                    cout << ",";
            }
            cout << "]" << endl;
        }
    }
    return 0;
}