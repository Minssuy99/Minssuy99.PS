#include <iostream>

using namespace std;

int main()
{
    int A, B = 0;

    while (cin >> A >> B)
    {
        if (0 < A && A < 10 && 0 < B && B < 10)
            cout << A + B << endl;
        else
            break;
        }

    return 0;
}