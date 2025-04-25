#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[101][101];
int visited[101][101];

queue<pair<int, int>> q;

int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};

void bfs(int y, int x)
{
    visited[y][x] = 1;
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
            if (arr[ny][nx] == 0 || visited[ny][nx])
                continue;

            visited[ny][nx] = visited[cy][cx] + 1;
            q.push({ny, nx});
        }
    }
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
        for (int j = 0; j < m; j++)
        {
            arr[i][j] = s[j] - '0';
        }
    }

    bfs(0, 0);

    cout << visited[n - 1][m - 1] << "\n";
    return 0;
}