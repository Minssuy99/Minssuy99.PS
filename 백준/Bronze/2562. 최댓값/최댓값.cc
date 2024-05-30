#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    int highest = 0;
    int highest_n = 0;

    for (int i = 0; i < 9; i++)
    {
        cin >> n;

        if (n > highest)
        {
            highest = n;
            highest_n = i + 1;
        }
    }

    cout << highest << endl;
    cout << highest_n << endl;

    return 0;
}