#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n;

    int arr[20000001] = {0};

    for (int i = 0; i < n; i++)
    {
        int number;
        cin >> number;
        arr[number + 10000000]++;
    }

    cin >> m;

    for (int i = 0; i < m; i++)
    {
        int number;
        cin >> number;
        cout << arr[number + 10000000] << " ";
    }
    return 0;
}
