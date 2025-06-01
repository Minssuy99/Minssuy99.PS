#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int n, m;

vector<int> vec;

void dfs(int depth)
{
    if (vec.size() == m)
    {
        for (int i = 0; i < m; i++)
        {
            cout << vec[i] << ' ';
        }
        cout << endl;
        return;
    }

    for (int i = 1; i <= n; i++)
    {
        vec.push_back(i);
        dfs(depth + 1);
        vec.pop_back();
    }
}

int main()
{
    cin >> n >> m;

    dfs(0);

    return 0;
}