#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i % 5 == 0)
        {
            count++;

            if (i % 25 == 0)
            {
                count++;

                if (i % 125 == 0)
                {
                    count++;
                }
            }
        }
    }

    cout << count;

    return 0;
}