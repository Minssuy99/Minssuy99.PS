#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int n, ret = INT_MIN;
string s;

int calc(int a, char op, int b)
{
    if (op == '+')
        return a + b;
    if (op == '-')
        return a - b;
    return a * b;
}

void dfs(int idx, int current)
{
    if (idx == n - 1)
    {
        ret = max(ret, current);
        return;
    }

    if (idx + 2 < n)
    {
        int next_num = s[idx + 2] - '0';
        char op = s[idx + 1];
        dfs(idx + 2, calc(current, op, next_num));
    }

    if (idx + 4 < n)
    {
        int a = s[idx + 2] - '0';
        char op2 = s[idx + 3];
        int b = s[idx + 4] - '0';

        int grouped = calc(a, op2, b);
        char op1 = s[idx + 1];
        dfs(idx + 4, calc(current, op1, grouped));
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> s;

    int cur = s[0] - '0';
    dfs(0, cur);

    cout << ret << endl;

    return 0;
}
