#include <iostream>

using namespace std;

int main()
{
    int A , B = 0;

        while (true)
        {
            cin >> A >> B;

            if (0 < A && A < 10 && 0 < B && B < 10)
            {

                if (A == 0 && B == 0)
                    break;

                else
                    cout << A + B << endl;
            }
            else
                break;
        }

    return 0;
}