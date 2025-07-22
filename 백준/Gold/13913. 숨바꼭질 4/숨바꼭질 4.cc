#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

const int MAX = 100001;

int n, k;
int dist[MAX];
int prev_pos[MAX];

void BFS(int start)
{
    queue<int> q;
    q.push(start);
    dist[start] = 0;

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
                prev_pos[next] = cur;
                q.push(next);
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

    vector<int> path;
    for (int cur = k; cur != n; cur = prev_pos[cur])
        path.push_back(cur);
    path.push_back(n);

    reverse(path.begin(), path.end());
    for (int p : path)
        cout << p << ' ';
    cout << endl;

    return 0;
}