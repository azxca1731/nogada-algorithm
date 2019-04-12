#include <iostream>
#include <string>
using namespace std;

int main()
{
    int A, B;
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        cin >> A >> B;
        cout << "Case #" << i << ": " << A + B << endl;
    }
}