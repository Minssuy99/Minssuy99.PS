#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;

    int arr[26] = {0};

    cin >> n;

    bool check = false;

    for (int i = 0; i < n; i++)
    {
        string s;

        cin >> s;

        int temp = s[0] - 97;

        arr[temp]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (arr[i] >= 5)
        {
            check = true;
            cout << char(i + 'a');
        }
    }

    if (check == false)
    {
        cout << "PREDAJA";
    }

    return 0;
}
