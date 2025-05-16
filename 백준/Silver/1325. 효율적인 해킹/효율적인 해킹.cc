#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

vector<int> adj[10001];
int n, m;

int dfs(int start, vector<bool> &visited)
{
    visited[start] = true;
    int count = 1;

    for (int next : adj[start])
    {
        if (!visited[next])
            count += dfs(next, visited);
    }
    return count;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    vector<int> hacked(n + 1, 0);

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[b].push_back(a);
    }

    int max_hacked = 0;

    for (int i = 1; i <= n; i++)
    {
        vector<bool> visited(n + 1, false);
        hacked[i] = dfs(i, visited);
        max_hacked = max(max_hacked, hacked[i]);
    }

    vector<int> result;
    for (int i = 1; i <= n; i++)
    {
        if (hacked[i] == max_hacked)
            result.push_back(i);
    }

    sort(result.begin(), result.end());

    for (int node : result)
        cout << node << endl;

    return 0;
}
