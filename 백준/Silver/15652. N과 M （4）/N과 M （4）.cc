#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int n, m;
vector<int> vec;

void dfs(int num, int cnt)
{
    if (cnt == m)
    {
        for (int i = 0; i < m; i++)
            cout << vec[i] << ' ';
        cout << endl;
        return;
    }

    for (int i = num; i <= n; i++)
    {
        vec.push_back(i);
        dfs(i, cnt + 1);
        vec.pop_back();
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;

    dfs(1, 0);

    return 0;
}