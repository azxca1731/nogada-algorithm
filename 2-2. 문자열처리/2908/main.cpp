#include <iostream>
using namespace std;

int main()
{
    int A, B;
    int Aprime = 0, Bprime = 0;
    cin >> A >> B;
    for (int i = A; i > 0; i /= 10)
    {
        Aprime = Aprime * 10 + i % 10;
    }
    for (int i = B; i > 0; i /= 10)
    {
        Bprime = Bprime * 10 + i % 10;
    }
    if (Aprime > Bprime)
        cout << Aprime << endl;
    else
        cout << Bprime << endl;
    return 0;
}