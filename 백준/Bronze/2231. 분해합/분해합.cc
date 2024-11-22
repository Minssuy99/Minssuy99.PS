#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;

    cin >> n;

    int result = 0;

    for (int i = 0; i < n; i++)
    {
        string st = to_string(i);
        int add_result = 0;

        for (int j = 0; j < st.size(); j++)
        {

            add_result += st[j] - '0';
        }

        if (n == i + add_result)
        {
            result = i;
            break;
        }
    }

    cout << result;

    return 0;
}