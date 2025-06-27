#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

const int MAX = 100001;

int n, k;
int dist[MAX];
int cnt[MAX];

void BFS(int start)
{
    queue<int> q;
    q.push(start);
    dist[start] = 0;
    cnt[start] = 1;

    while (!q.empty())
    {
        int cur = q.front();
        q.pop();

        for (int next : {cur - 1, cur + 1, cur * 2})
        {
            if (next < 0 || next >= MAX)
                continue;

            if (dist[next] == -1)
            {
                dist[next] = dist[cur] + 1;
                cnt[next] = cnt[cur];
                q.push(next);
            }
            else if (dist[next] == dist[cur] + 1)
            {
                cnt[next] += cnt[cur];
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> k;

    fill(dist, dist + MAX, -1);
    BFS(n);

    cout << dist[k] << endl;
    cout << cnt[k] << endl;

    return 0;
}
