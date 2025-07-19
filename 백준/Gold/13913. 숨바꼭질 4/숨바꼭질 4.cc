#include <bits/stdc++.h>
using namespace std;

const int MAX = 100001;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> dist(MAX, -1);
    vector<int> from(MAX, -1);
    queue<int> q;

    dist[n] = 0;
    q.push(n);

    while (!q.empty())
    {
        int cur = q.front();
        q.pop();

        if (cur == k)
            break;

        for (int next : {cur - 1, cur + 1, cur * 2})
        {
            if (next < 0 || next >= MAX)
                continue;
            if (dist[next] != -1)
                continue;

            dist[next] = dist[cur] + 1;
            from[next] = cur;
            q.push(next);
        }
    }

    cout << dist[k] << '\n';

    stack<int> path;
    for (int i = k; i != -1; i = from[i])
    {
        path.push(i);
    }

    while (!path.empty())
    {
        cout << path.top() << ' ';
        path.pop();
    }

    return 0;
}