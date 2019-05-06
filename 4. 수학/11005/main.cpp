#include <iostream>
using namespace std;
int main()
{
    int A, B;
    char temp;
    string buffer = "";
    cin >> A >> B;

    for (int i = A; i >= 1; i /= B)
    {
        temp = i % B;
        if (0 <= temp && temp <= 9)
        {
            temp = '0' + temp;
        }
        else
        {
            temp -= 10;
            temp += 'A';
        }
        buffer = temp + buffer;
    }
    cout << buffer << endl;
    return 0;
}