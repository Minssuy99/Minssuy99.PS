#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int result = 0;

    string s;

    cin >> s;

    while (s.size() != 1)
    {
        int num = 1;
        if (s == "0")
            break;

        for (int i = 0; i < s.size(); i++)
        {

            num *= s[i] - '0';
        }
        s = to_string(num);
        result++;
    }

    cout << result;

    return 0;
}