#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int n, m_height, ret;

int arr[101][101];
bool visited[101][101];

int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};

void bfs(int y, int x, int height)
{
    visited[y][x] = 1;

    queue<pair<int, int>> q;

    q.push({y, x});

    while (!q.empty())
    {
        auto cur = q.front();
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int ny = cur.first + dy[i];
            int nx = cur.second + dx[i];

            if (ny < 0 || nx < 0 || ny >= n || nx >= n)
                continue;
            if (visited[ny][nx] || arr[ny][nx] <= height)
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
            cin >> arr[i][j];

            if (arr[i][j] > m_height)
            {
                m_height = arr[i][j];
            }
        }
    }

    for (int k = 0; k < m_height; k++)
    {
        memset(visited, 0, sizeof(visited));

        int save = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[i][j] > k && visited[i][j] == 0)
                {
                    bfs(i, j, k);
                    save++;
                }
            }
        }
        if (save > ret)
            ret = save;
    }

    cout << ret;

    return 0;
}