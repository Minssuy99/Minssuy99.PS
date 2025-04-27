#include <bits/stdc++.h>

using namespace std;

int area[101][101];
bool visited[101][101];

int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};

int n, max_height, area_point, ret;

void bfs(int y, int x, int height)
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

            if (ny < 0 || nx < 0 || ny >= n || nx >= n || area[ny][nx] <= height)
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

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int height = 0;
            cin >> height;

            if (height > max_height)
                max_height = height;

            area[i][j] = height;
        }
    }

    for (int k = 0; k < max_height; k++)
    {
        memset(visited, 0, sizeof(visited));
        area_point = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (area[i][j] > k && visited[i][j] == 0)
                {
                    bfs(i, j, k);
                    area_point++;
                }
            }
        }
        if (area_point > ret)
            ret = area_point;
    }

    cout << ret << '\n';

    return 0;
}