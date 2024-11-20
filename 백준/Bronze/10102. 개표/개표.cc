#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a = 0;
    int b = 0;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;

        if (c == 'A')
        {
            a++;
        }
        else if (c == 'B')
        {
            b++;
        }
    }

    if (a > b)
    {
        cout << 'A';
    }
    else if (a < b)
    {
        cout << 'B';
    }
    else if (a == b)
    {
        cout << "Tie";
    }

    return 0;
}