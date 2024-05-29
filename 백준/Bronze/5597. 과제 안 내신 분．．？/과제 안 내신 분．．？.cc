#include <iostream>

using namespace std;

int main()
{
    int n;

    bool number[31] = {0};

    for (int i = 1; i <= 28; i++)
    {
        cin >> n;
        number[n] = 1;
    }

    for (int i = 1; i < 31; i++)
    {
        if (number[i] == 0)
        {
            cout << i << "\n";
        }
    }

    return 0;
}