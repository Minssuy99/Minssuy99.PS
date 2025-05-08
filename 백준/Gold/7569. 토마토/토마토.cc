#include <bits/stdc++.h>
using namespace std;

int dx[] = {0, 1, 0, -1, 0, 0};
int dy[] = {-1, 0, 1, 0, 0, 0};
int dz[] = {0, 0, 0, 0, 1, -1};

int m, n, h;
int arr[101][101][101];

queue<tuple<int, int, int>> q;

void bfs()
{
    while (!q.empty())
    {
        auto [y, x, z] = q.front();
        q.pop();
        for (int i = 0; i < 6; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];
            int nz = z + dz[i];

            if (ny < 0 || nx < 0 || nz < 0 || ny >= n || nx >= m || nz >= h)
                continue;
            if (arr[ny][nx][nz] != 0)
                continue;

            arr[ny][nx][nz] = arr[y][x][z] + 1;
            q.push({ny, nx, nz});
        }
    }
}

int main()
{
    cin >> m >> n >> h;

    for (int z = 0; z < h; z++)
    {
        for (int y = 0; y < n; y++)
        {
            for (int x = 0; x < m; x++)
            {
                cin >> arr[y][x][z];

                if (arr[y][x][z] == 1)
                {
                    q.push({y, x, z});
                }
            }
        }
    }

    bfs();

    int ret = 0;

    for (int z = 0; z < h; z++)
    {
        for (int y = 0; y < n; y++)
        {
            for (int x = 0; x < m; x++)
            {
                if (arr[y][x][z] == 0)
                {
                    cout << -1 << '\n';
                    return 0;
                }
                ret = max(ret, arr[y][x][z]);
            }
        }
    }

    cout << ret - 1 << '\n';
    return 0;
}
