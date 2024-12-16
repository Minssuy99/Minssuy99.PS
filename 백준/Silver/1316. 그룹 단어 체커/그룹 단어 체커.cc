#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int result = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        bool check = true;

        for (int j = 0; j < s.size(); j++)
        {

            for (int k = 0; k < j; k++)
            {
                if (s[j] == s[k] && s[j] != s[j - 1])
                {
                    check = false;
                    break;
                }
            }
            if (!check)
                break;
        }

        if (check)
            result++;
    }

    cout << result;

    return 0;
}
