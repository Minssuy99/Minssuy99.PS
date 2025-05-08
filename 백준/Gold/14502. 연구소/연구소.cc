#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int n, m, ret;

int arr[9][9];

bool visited[9][101];

vector<pair<int, int>> wall_pos;
vector<pair<int, int>> virus_pos;

int dy[] = {0, -1, 0, 1};
int dx[] = {1, 0, -1, 0};

void dfs(int y, int x)
{
    for (int i = 0; i < 4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];

        if (ny < 0 || nx < 0 || ny >= n || nx >= m || visited[ny][nx] || arr[ny][nx] == 1)
            continue;

        visited[ny][nx] = 1;
        dfs(ny, nx);
    }
    return;
}

int init()
{
    memset(visited, 0, sizeof(visited));

    for (pair<int, int> p : virus_pos)
    {
        visited[p.first][p.second] = 1;
        dfs(p.first, p.second);
    }

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 0 && !visited[i][j])
                count++;
        }
    }
    return count;
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];

            if (arr[i][j] == 0)
            {
                wall_pos.push_back(make_pair(i, j));
            }
            else if (arr[i][j] == 2)
            {
                virus_pos.push_back(make_pair(i, j));
            }
        }
    }

    for (int i = 0; i < wall_pos.size(); i++)
    {
        for (int j = 0; j < i; j++)
        {
            for (int k = 0; k < j; k++)
            {
                arr[wall_pos[i].first][wall_pos[i].second] = 1;
                arr[wall_pos[j].first][wall_pos[j].second] = 1;
                arr[wall_pos[k].first][wall_pos[k].second] = 1;
                ret = max(ret, init());
                arr[wall_pos[i].first][wall_pos[i].second] = 0;
                arr[wall_pos[j].first][wall_pos[j].second] = 0;
                arr[wall_pos[k].first][wall_pos[k].second] = 0;
            }
        }
    }

    cout << ret << endl;

    return 0;
}