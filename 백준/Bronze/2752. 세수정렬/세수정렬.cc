#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n = 3;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + 3);

    cout << arr[0] << " " << arr[1] << " " << arr[2];

    return 0;
}