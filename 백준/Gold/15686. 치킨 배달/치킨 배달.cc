#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int n, m;

int answer = INT_MAX;

int arr[50][50];

vector<pair<int, int>> house;
vector<pair<int, int>> chickens;
vector<bool> selected;

int calc()
{
    int ret = 0;

    for (auto h : house)
    {
        int min_dist = INT_MAX;

        for (int i = 0; i < chickens.size(); i++)
        {
            if (selected[i])
            {
                int dist = abs(h.first - chickens[i].first) + abs(h.second - chickens[i].second);
                min_dist = min(min_dist, dist);
            }
        }
        ret += min_dist;
    }

    return ret;
}

void dfs(int index, int count)
{
    if (count == m)
    {
        int distance = calc();
        answer = min(answer, distance);
        return;
    }

    if (index == chickens.size())
        return;

    selected[index] = true;
    dfs(index + 1, count + 1);

    selected[index] = false;
    dfs(index + 1, count);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];

            if (arr[i][j] == 1)
            {
                house.push_back({i, j});
            }

            if (arr[i][j] == 2)
            {
                chickens.push_back({i, j});
            }
        }
    }

    selected.resize(chickens.size(), false);
    dfs(0, 0);

    cout << answer << endl;

    return 0;
}