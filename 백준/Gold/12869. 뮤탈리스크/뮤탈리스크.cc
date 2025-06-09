#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int n;
int arr[3];
int visited[61][61][61];

int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};

struct state
{
    int a, b, c;
};

int attack[6][3] = {{9, 3, 1}, {9, 1, 3}, {3, 9, 1}, {3, 1, 9}, {1, 3, 9}, {1, 9, 3}};

int bfs(int a, int b, int c)
{
    queue<state> q;

    visited[a][b][c] = 1;
    q.push({a, b, c});

    while (!q.empty())
    {
        int ca = q.front().a;
        int cb = q.front().b;
        int cc = q.front().c;
        q.pop();

        if (visited[0][0][0])
            break;

        for (int i = 0; i < 6; i++)
        {
            int na = max(0, ca - attack[i][0]);
            int nb = max(0, cb - attack[i][1]);
            int nc = max(0, cc - attack[i][2]);

            if (visited[na][nb][nc])
                continue;
            visited[na][nb][nc] = visited[ca][cb][cc] + 1;

            q.push({na, nb, nc});
        }
    }
    return visited[0][0][0] - 1;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << bfs(arr[0], arr[1], arr[2]);

    return 0;
}