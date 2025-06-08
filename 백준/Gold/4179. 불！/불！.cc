#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int r, c;
char arr[1000][1000];
int fire[1000][1000], jihun[1000][1000];

queue<pair<int, int>> fireQ, jihunQ;

int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};

void FireBFS()
{
    while (!fireQ.empty())
    {
        auto cur = fireQ.front();
        fireQ.pop();

        int cy = cur.first;
        int cx = cur.second;

        for (int i = 0; i < 4; i++)
        {
            int ny = cy + dy[i];
            int nx = cx + dx[i];

            if (ny < 0 || nx < 0 || ny >= r || nx >= c)
                continue;
            if (arr[ny][nx] == '#' || fire[ny][nx] != -1)
                continue;

            fire[ny][nx] = fire[cy][cx] + 1;
            fireQ.push({ny, nx});
        }
    }
}

void JihunBFS()
{
    while (!jihunQ.empty())
    {
        auto cur = jihunQ.front();
        jihunQ.pop();

        int cy = cur.first;
        int cx = cur.second;

        if (cy == 0 || cy == r - 1 || cx == 0 || cx == c - 1)
        {
            cout << jihun[cy][cx] + 1 << endl;
            return;
        }

        for (int i = 0; i < 4; i++)
        {
            int ny = cy + dy[i];
            int nx = cx + dx[i];

            if (ny < 0 || nx < 0 || ny >= r || nx >= c)
                continue;
            if (arr[ny][nx] == '#' || jihun[ny][nx] != -1)
                continue;
            if (fire[ny][nx] != -1 && fire[ny][nx] <= jihun[cy][cx] + 1)
                continue;

            jihun[ny][nx] = jihun[cy][cx] + 1;
            jihunQ.push({ny, nx});
        }
    }

    cout << "IMPOSSIBLE" << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    memset(fire, -1, sizeof(fire));
    memset(jihun, -1, sizeof(jihun));

    cin >> r >> c;

    for (int i = 0; i < r; i++)
    {
        string s;
        cin >> s;

        for (int j = 0; j < c; j++)
        {
            arr[i][j] = s[j];

            if (arr[i][j] == 'J')
            {
                jihunQ.push({i, j});
                jihun[i][j] = 0;
            }
            else if (arr[i][j] == 'F')
            {
                fireQ.push({i, j});
                fire[i][j] = 0;
            }
        }
    }

    FireBFS();
    JihunBFS();

    return 0;
}