#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    stack<bool> cutter;
    string ironbar;
    bool isLazor = false;
    int max = 0;

    cin >> ironbar;
    for (int i = 0; i < ironbar.length(); i++)
    {
        if (ironbar[i] == '(')
        {
            cutter.push(true);
            isLazor = true;
        }
        if (ironbar[i] == ')')
        {
            if (isLazor)
            {
                isLazor = false;
                cutter.pop();
                max += cutter.size();
            }
            else
            {
                isLazor = false;
                max++;
                cutter.pop();
            }
        }
    }
    cout << max << endl;
    return 0;
}