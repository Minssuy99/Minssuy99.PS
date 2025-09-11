#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int T, M, N, K, ret;
bool arr[51][51], visited[51][51];

int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};

void bfs(int y, int x)
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

            if (ny < 0 || nx < 0 || ny >= N || nx >= M)
                continue;
            if (arr[ny][nx] == 0 || visited[ny][nx] == 1)
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
        memset(arr, 0, sizeof(arr));
        memset(visited, 0, sizeof(visited));
        ret = 0;

        cin >> M >> N >> K;

        for (int i = 0; i < K; i++)
        {
            int x, y;
            cin >> x >> y;

            arr[y][x] = 1;
        }

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                if (arr[i][j] == 1 && visited[i][j] == 0)
                {
                    bfs(i, j);
                    ret++;
                }
            }
        }
        cout << ret << endl;
    }

    return 0;
}