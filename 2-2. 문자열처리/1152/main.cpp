#include <iostream>
#include <cstring>
char buffer[1000001];
using namespace std;
int main()
{
    int count = 0;
    fgets(buffer, 1000000, stdin);
    char *ptr = strtok(buffer, " ");

    while (ptr != NULL)
    {
        if (ptr[0] == ' ' || ptr[0] == '\n')
        {
            break;
        }
        count++;
        ptr = strtok(NULL, " ");
    }
    cout << count << endl;
    return 0;
}