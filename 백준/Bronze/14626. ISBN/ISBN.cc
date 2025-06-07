#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int ret;
string s;

int main()
{
    cin >> s;

    int idx = s.find('*');

    for (int i = 0; i < 10; i++)
    {
        s[idx] = i + '0';
        ret = 0;

        for (int j = 0; j < 13; j++)
        {
            if (j % 2 == 1)
            {
                ret += (s[j] - '0') * 3;
            }
            else
            {
                ret += (s[j] - '0');
            }
        }
        if (ret % 10 == 0)
        {
            cout << s[idx];
            break;
        }
    }
    return 0;
}