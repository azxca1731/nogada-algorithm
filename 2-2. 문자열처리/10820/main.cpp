#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>
using namespace std;
int arr[4];
int main()
{
    char buffer[200];
    while (fgets(buffer, sizeof(buffer), stdin) != NULL)
    {
        memset(arr, 0, sizeof(arr));

        for (int i = 0; i < strlen(buffer); i++)
        {
            if ('a' <= buffer[i] && buffer[i] <= 'z')
            {
                arr[0]++;
            }
            else if ('A' <= buffer[i] && buffer[i] <= 'Z')
            {
                arr[1]++;
            }
            else if ('0' <= buffer[i] && buffer[i] <= '9')
            {
                arr[2]++;
            }
            else if (buffer[i] == ' ')
            {
                arr[3]++;
            }
        }
        for (int i = 0; i < 4; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}