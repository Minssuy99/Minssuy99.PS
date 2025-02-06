#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int arr[91] = {0};
    string s, ret;
    char mid;
    int flag = 0;

    cin >> s;

    for (char c : s)
    {
        arr[c]++;
    }

    for (int i = 'Z'; i >= 'A'; i--)
    {
        if (arr[i])
        {
            if (arr[i] & 1)
            {
                mid = char(i);
                flag++;
                arr[i]--;
            }
            if (flag == 2)
                break;
            for (int j = 0; j < arr[i]; j += 2)
            {
                ret = char(i) + ret + char(i);
            }
        }
    }

    if (mid)
        ret.insert(ret.begin() + ret.size() / 2, mid);

    if (flag == 2)

        cout << "I'm Sorry Hansoo";
    else
        cout << ret;

    return 0;
}