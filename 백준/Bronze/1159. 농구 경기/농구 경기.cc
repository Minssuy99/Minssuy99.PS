#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int arr[26];
    int n;
    bool check = true;

    memset(arr, 0, sizeof(arr));

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string s;

        cin >> s;

        arr[s[0] - 97]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (arr[i] >= 5)
        {
            check = false;
            cout << char(i + 97);
        }
    }

    if (check)
        cout << "PREDAJA";

    return 0;
}