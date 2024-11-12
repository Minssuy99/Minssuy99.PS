#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int arr[10001] = {0};

    for (int i = 1; i <= n; i++)
    {
        int number;
        cin >> number;
        arr[number]++;
    }

    for (int i = 1; i <= 10000; i++)
    {
        for (int k = 1; k <= arr[i]; k++)
        {
            cout << i << '\n';
        }
    }

    return 0;
}