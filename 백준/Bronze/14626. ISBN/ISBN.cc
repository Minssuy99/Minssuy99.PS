#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int idx = s.find('*');
    int total = 0;

    for (int i = 0; i < 13; i++)
    {
        if (i == idx) continue;
        int digit = s[i] - '0';
        total += (i % 2 == 0) ? digit : digit * 3;
    }

    for (int i = 0; i < 10; i++)
    {
        int temp = total + ((idx % 2 == 0) ? i : i * 3);
        if (temp % 10 == 0)
        {
            cout << i;
            break;
        }
    }

    return 0;
}