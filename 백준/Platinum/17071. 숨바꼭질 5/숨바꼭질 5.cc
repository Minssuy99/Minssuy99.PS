#include <bits/stdc++.h>
using namespace std;

const int MAX = 500001;

int n, k;
int dist[MAX][2];

void BFS(int start)
{
    queue<pair<int, int>> q;
    q.push({start, 0});
    dist[start][0] = 0;

    while (!q.empty())
    {
        auto [cur, time] = q.front();
        q.pop();

        for (int next : {cur - 1, cur + 1, cur * 2})
        {
            if (next < 0 || next >= MAX)
                continue;
            int nextTime = time + 1;
            int parity = nextTime % 2;

            if (dist[next][parity] != -1)
                continue;

            dist[next][parity] = nextTime;
            q.push({next, nextTime});
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> k;

    memset(dist, -1, sizeof(dist));
    BFS(n);

    int t = 0;
    int sister = k;

    while (sister < MAX)
    {
        if (dist[sister][t % 2] != -1 && dist[sister][t % 2] <= t)
        {
            cout << t << '\n';
            return 0;
        }
        t++;
        sister += t;
    }

    cout << -1 << '\n';
    return 0;
}