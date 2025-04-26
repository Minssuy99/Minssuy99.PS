#include <bits/stdc++.h>

using namespace std;

int T, m, n, k, ret;

bool farm[51][51];
bool visited[51][51];

int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};

void bfs(int y, int x)
{
    queue<pair<int, int>> q;

    visited[y][x] = 1;

    q.push({y, x});

    while (q.size())
    {
        auto cur = q.front();
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int ny = cur.first + dy[i];
            int nx = cur.second + dx[i];

            if (ny < 0 || nx < 0 || ny >= n || nx >= m || farm[ny][nx] == 0)
                continue;

            if (visited[ny][nx])
                continue;

            visited[ny][nx] = 1;
            q.push({ny, nx});
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> T;

    while (T--)
    {
        memset(farm, 0, sizeof(farm));
        memset(visited, 0, sizeof(visited));
        ret = 0;

        cin >> m >> n >> k;

        for (int i = 0; i < k; i++)
        {
            int cabbage_x, cabbage_y;
            cin >> cabbage_x >> cabbage_y;

            farm[cabbage_y][cabbage_x] = 1;
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (farm[i][j] == 1 && visited[i][j] == 0)
                {
                    bfs(i, j);
                    ret++;
                }
            }
        }

        cout << ret << '\n';
    }

    return 0;
}