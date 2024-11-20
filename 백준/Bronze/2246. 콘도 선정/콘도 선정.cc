#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int count = 0;

    vector<pair<int, int>> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first >> arr[i].second;
    }

    for (int i = 0; i < n; i++)
    {
        bool flag = true;
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                if ((arr[i].first > arr[j].first && arr[i].second >= arr[j].second) ||
                    (arr[i].second > arr[j].second && arr[i].first >= arr[j].first))
                {
                    flag = false;
                    break;
                }
            }
        }
        if (flag)
            count++;
    }

    cout << count << "\n";

    return 0;
}