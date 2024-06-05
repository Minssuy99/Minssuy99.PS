#include <iostream>

using namespace std;

int main()
{
    int a, b = 0;
    int hamburger = 0;

    cin >> a >> b;

    while(true)
    {
        if (a >= 2 && b > 0)
        {
            a -= 2;
            b--;
            hamburger++;
        }
        else
        break;
    }

    cout << hamburger << endl;

    return 0;
}