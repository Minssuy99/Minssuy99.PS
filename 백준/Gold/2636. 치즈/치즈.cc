#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int n, m, ret, cheese;
queue<pair<int, int>> q;
vector<pair<int, int>> melt;

int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};

int arr[101][101];
bool visited[101][101];

void bfs(int y, int x)
{
    memset(visited, 0, sizeof(visited));
    visited[y][x] = 1;
    q.push({y, x});
    melt.clear();

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

            visited[ny][nx] = 1;
            if (arr[ny][nx] == 0)
            {
                q.push({ny, nx});
            }
            else if (arr[ny][nx] == 1)
            {
                melt.push_back({ny, nx});
            }
        }
    }
}

int main()
{
    cin >> n >> m;

    int total_cheese = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
                total_cheese++;
        }
    }

    int time = 0;
    int last_cheese = 0;

    while (total_cheese > 0)
    {
        last_cheese = total_cheese;
        bfs(0, 0);

        for (auto pos : melt)
        {
            arr[pos.first][pos.second] = 0;
            total_cheese--;
        }

        time++;
    }

    cout << time << endl << last_cheese;

    return 0;
}