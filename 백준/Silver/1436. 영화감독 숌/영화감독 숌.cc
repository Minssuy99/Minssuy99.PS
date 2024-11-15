#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int result = 665;
    string s;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        while (true)
        {
            result++;
            s = to_string(result);
            if (s.find("666") != -1)
            {
                break;
            }
        }
    }

    cout << result << '\n';

    return 0;
}