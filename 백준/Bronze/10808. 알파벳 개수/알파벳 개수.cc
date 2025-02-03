// .
// https://www.acmicpc.net/problem/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;

    cin >> s;

    int arr[26] = {0};

    for (int i = 0; i < s.length(); i++)
    {
        int num = s[i] - 97;
        arr[num]++;
    }

    for (int n : arr)
    {
        cout << n << " ";
    }

    return 0;
}