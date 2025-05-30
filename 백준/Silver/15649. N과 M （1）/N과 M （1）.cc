#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int n, m;

vector<int> vec;
bool visited[9];

void dfs(int depth)
{
    if (depth == m)
    {
        for (int i = 0; i < m; i++)
        {
            cout << vec[i] << " ";
        }
        cout << endl;

        return;
    }
    for (int i = 01; i <= n; i++)
    {
        if (!visited[i])
        {
            visited[i] = true;
            vec.push_back(i);

            dfs(depth + 1);

            visited[i] = false;
            vec.pop_back();
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;

    dfs(0);

    return 0;
}