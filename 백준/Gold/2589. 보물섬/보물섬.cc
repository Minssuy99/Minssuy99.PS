#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int n, m, ret;
char arr[50][50];

int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};

void bfs(int y, int x)
{
    bool visited[50][50] = {0};
    int dist[50][50] = {0};

    visited[y][x] = true;

    int max_dist = 0;

    queue<pair<int, int>> q;
    q.push({y, x});

    while (!q.empty())
    {
        auto cur = q.front();
        q.pop();

        int cy = cur.first;
        int cx = cur.second;

        for (int i = 0; i < 4; i++)
        {
            int ny = cy + dy[i];
            int nx = cx + dx[i];

            if (ny < 0 || nx < 0 || ny >= n || nx >= m)
                continue;
            if (visited[ny][nx])
                continue;
            if (arr[ny][nx] == 'W')
                continue;

            visited[ny][nx] = true;
            dist[ny][nx] = dist[cy][cx] + 1;
            max_dist = max(max_dist, dist[ny][nx]);

            q.push({ny, nx});
        }
    }
    ret = max(ret, max_dist);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        string s;

        cin >> s;

        for (int j = 0; j < s.size(); j++)
        {
            arr[i][j] = s[j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 'L')
            {
                bfs(i, j);
            }
        }
    }

    cout << ret << endl;

    return 0;
}