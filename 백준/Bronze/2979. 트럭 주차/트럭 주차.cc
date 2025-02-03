#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int arr[101] = {0};

    int a, b, c;

    int result = 0;

    cin >> a >> b >> c;

    for (int i = 0; i < 3; i++)
    {
        int x, y;

        cin >> x >> y;

        for (int j = x; j < y; j++)
        {
            arr[j]++;
        }
    }

    for (int i = 1; i <= 100; i++)
    {
        if (arr[i] == 1)
        {
            result = arr[i] * a + result;
        }
        else if (arr[i] == 2)
        {
            result = arr[i] * b + result;
        }
        else if (arr[i] == 3)
        {
            result = arr[i] * c + result;
        }
    }

    cout << result;

    return 0;
}
