#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int n, L, R, total_day;
int A[50][50];
bool visited[50][50];

int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};

vector<pair<int, int>> bfs(int y, int x)
{
    vector<pair<int, int>> union_countries;
    queue<pair<int, int>> q;

    visited[y][x] = true;
    q.push({y, x});
    union_countries.push_back({y, x});

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

            if (ny < 0 || nx < 0 || ny >= n || nx >= n)
                continue;
            if (visited[ny][nx])
                continue;

            int diff = abs(A[ny][nx] - A[cy][cx]);
            if (diff < L || diff > R)
                continue;

            visited[ny][nx] = true;
            q.push({ny, nx});
            union_countries.push_back({ny, nx});
        }
    }

    return union_countries;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> L >> R;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
    }

    while (true)
    {
        memset(visited, false, sizeof(visited));
        bool moved = false;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (!visited[i][j])
                {
                    vector<pair<int, int>> union_countries = bfs(i, j);

                    if (union_countries.size() > 1)
                    {
                        moved = true;


                        int total_population = 0;
                        for (auto country : union_countries)
                        {
                            total_population += A[country.first][country.second];
                        }


                        int new_population = total_population / union_countries.size();

                        for (auto country : union_countries)
                        {
                            A[country.first][country.second] = new_population;
                        }
                    }
                }
            }
        }

        if (!moved)
            break;

        total_day++;
    }

    cout << total_day << endl;

    return 0;
}