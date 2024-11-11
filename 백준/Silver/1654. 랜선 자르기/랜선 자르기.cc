#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    unsigned int n, k;
    unsigned int max_line;

    cin >> n >> k;

    vector<unsigned int> vec(n);

    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
        max_line = max(max_line, vec[i]);
    }

    unsigned int left = 1;
    unsigned int right = max_line;
    unsigned int result = 0;

    while (left <= right)
    {
        unsigned int a = 0;

        unsigned int mid = (right + left) / 2;

        for (int i = 0; i < n; i++)
        {
            a += vec[i] / mid;
        }

        if (a >= k)
        {
            result = max(result, mid);
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    cout << result << '\n';

    return 0;
}