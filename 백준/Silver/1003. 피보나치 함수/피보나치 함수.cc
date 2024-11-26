#include <bits/stdc++.h>

using namespace std;

int arr[41] = {0, 1, 1};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    while (n--)
    {
        int number;

        cin >> number;

        for (int i = 3; i <= number; i++)
        {
            arr[i] = arr[i - 1] + arr[i - 2];
        }

        if (number == 0)
        {
            cout << 1 << " " << 0 << '\n';
        }
        else if (number == 1)
        {
            cout << 0 << " " << 1 << '\n';
        }
        else
        {
            cout << arr[number - 1] << " " << arr[number] << '\n';
        }
    }

    return 0;
}