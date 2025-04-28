#include <bits/stdc++.h>
using namespace std;

const int MAX = 101;

int arr[MAX][MAX], visited[MAX][MAX];

int m, n, k;

int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};

vector<int> areas;

int bfs(int sy, int sx)
{
    queue<pair<int, int>> q;

    q.push({sy, sx});
    visited[sy][sx] = 1;

    int area = 1;

    while (!q.empty())
    {
        auto [y, x] = q.front();
        q.pop();

        for (int dir = 0; dir < 4; dir++)
        {
            int ny = y + dy[dir];
            int nx = x + dx[dir];

            if (ny < 0 || nx < 0 || ny >= m || nx >= n)
                continue;

            if (visited[ny][nx])
                continue;

            if (arr[ny][nx] == 1)
                continue;

            visited[ny][nx] = 1;
            q.push({ny, nx});
            area++;
        }
    }
    return area;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> m >> n >> k;

    for (int i = 0; i < k; i++)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        for (int y = y1; y < y2; y++)
        {
            for (int x = x1; x < x2; x++)
            {
                arr[y][x] = 1;
            }
        }
    }

    for (int y = 0; y < m; y++)
    {
        for (int x = 0; x < n; x++)
        {
            if (!visited[y][x] && arr[y][x] == 0)
            {
                areas.push_back(bfs(y, x));
            }
        }
    }

    sort(areas.begin(), areas.end());

    cout << areas.size() << '\n';
    for (int a : areas)
    {
        cout << a << ' ';
    }
    return 0;
}