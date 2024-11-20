#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;

    cin >> s;

    int changed_0 = 0;
    int changed_1 = 0;
    char lately_char;

    if (s[0] == '0')
    {
        changed_0++;
        lately_char = '0';
    }
    else if (s[0] == '1')
    {
        changed_1++;
        lately_char = '1';
    }

    for (int i = 0; i < s.size(); i++)
    {
        if (lately_char != s[i])
        {
            if (s[i] == '0')
            {
                lately_char = '0';
                changed_0++;
            }
            else if (s[i] == '1')
            {
                lately_char = '1';
                changed_1++;
            }
        }
    }

    if (changed_0 >= changed_1)
    {
        cout << changed_1 << '\n';
    }
    else
    {
        cout << changed_0 << '\n';
    }

    return 0;
}