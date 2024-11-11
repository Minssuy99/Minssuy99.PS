#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m, t;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> m >> t;

        queue<pair<int, int>> q;
        priority_queue<int> pq;

        for (int k = 0; k < m; k++)
        {
            int number;
            cin >> number;
            q.push({number, k});
            pq.push(number);
        }

        int count = 0;

        while (!q.empty())
        {
            int important = q.front().first;
            int idx = q.front().second;
            q.pop();

            if (pq.top() == important)
            {
                pq.pop();
                count++;
                if (idx == t)
                {
                    cout << count << '\n';
                    break;
                }
            }
            else
            {
                q.push({important, idx});
            }
        }
    }

    return 0;
}