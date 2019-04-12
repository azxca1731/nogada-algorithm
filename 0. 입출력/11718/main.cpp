#include <iostream>
#include <string>
using namespace std;
int main()
{
    string buffer;
    while (getline(cin, buffer))
    {
        cout << buffer << endl;
    }
}