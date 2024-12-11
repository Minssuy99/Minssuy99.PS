#include <bits/stdc++.h>

using namespace std;

int matrix[1001][1001];
bool vis[1001];

void bfs(int start, int num)
{
    queue<int> q;
    q.push(start);

    while (!q.empty())
    {
        int current = q.front();
        q.pop();

        if (!vis[current])
        {
            vis[current] = 1;
            cout << current << ' ';
        }

        for (int i = 1; i <= num; i++)
        {
            if (matrix[current][i] == 1 && !vis[i])
            {
                q.push(i);
            }
        }
    }
}

void dfs(int start, int num)
{
    stack<int> st;
    st.push(start);

    while (!st.empty())
    {
        int current = st.top();
        st.pop();

        if (!vis[current])
        {
            vis[current] = 1;
            cout << current << ' ';
        }

        for (int i = num; i >= 1; i--)
        {
            if (matrix[current][i] == 1 && !vis[i])
            {
                st.push(i);
            }
        }
    }
}

int main()
{
    int n, m, v;
    int first, second;

    cin >> n >> m >> v;

    for (int i = 0; i < m; i++)
    {
        cin >> first >> second;

        matrix[first][second] = 1;
        matrix[second][first] = 1;
    }

    dfs(v, n);
    memset(vis, 0, sizeof(vis));
    cout << endl;

    bfs(v, n);

    return 0;
}