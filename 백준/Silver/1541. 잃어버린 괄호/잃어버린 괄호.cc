#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    string num;

    int result = 0;

    bool check = false;

    cin >> s;

    for (int i = 0; i <= s.size(); i++)
    {
        if (s[i] == '+' || s[i] == '-' || i == s.size())
        {
            if (check)
            {
                result -= stoi(num);
                num.clear();
            }
            else
            {
                result += stoi(num);
                num.clear();
            }
        }
        else
        {
            num += s[i];
        }
        if (s[i] == '-')
        {
            check = true;
        }
    }

    cout << result;

    return 0;
}