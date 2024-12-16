// 7576. 토마토
// https://www.acmicpc.net/problem/7576

#include <bits/stdc++.h>

using namespace std;
#define X first
#define Y second

int n, m; // 행(n)과 열(m)
int arr[1001][1001];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

queue<pair<int, int>> q;

void bfs();

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int result = 0;

    // 입력 받기
    cin >> m >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
            {
                q.push({i, j});
            }
        }
    }

    bfs();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 0)
            {
                cout << -1;
                return 0;
            }
            result = max(result, arr[i][j] - 1);
        }
    }

    cout << result;
    return 0;
}

void bfs()
{
    while (!q.empty())
    {
        pair<int, int> cur = q.front();
        q.pop();

        for (int dir = 0; dir < 4; dir++)
        {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];

            if (nx < 0 || nx >= n || ny < 0 || ny >= m)
                continue;
            if (arr[nx][ny] == -1) // 벽
                continue;

            if (arr[nx][ny] == 0) // 익지 않은 토마토
            {
                arr[nx][ny] = arr[cur.X][cur.Y] + 1;
                q.push({nx, ny});
            }
        }
    }
}
