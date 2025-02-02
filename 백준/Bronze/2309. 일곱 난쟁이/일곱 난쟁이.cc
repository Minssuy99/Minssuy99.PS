#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int arr[9];
    int sum = 0;
    int num = 0;

    for (int i = 0; i < 9; i++)
    {
        cin >> arr[i];

        sum += arr[i];
    }

    num = sum - 100;

    for (int i = 0; i < 8; i++)
    {
        bool check = false;
        for (int j = i + 1; j < 9; j++)
        {
            if (arr[i] + arr[j] == num)
            {
                arr[i] = 0;
                arr[j] = 0;
                check = true;
                break;
            }
        }

        if (check)
            break;
    }

    sort(arr, arr + 9);

    for (int i = 0; i < 9; i++)
    {
        if (arr[i] != 0)
        {
            cout << arr[i] << '\n';
        }
    }

    return 0;
}