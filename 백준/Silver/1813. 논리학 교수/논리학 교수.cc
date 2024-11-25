#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int arr[51] = {0};

    for (int i = 0; i < n; i++)
    {
        int number;
        cin >> number;
        arr[number]++;
    }

    int best = -1;

    for (int i = 0; i < 51; i++)
    {
        if (arr[i] == i)
        {
            best = i;
        }
    }

    cout << best;

    return 0;
}