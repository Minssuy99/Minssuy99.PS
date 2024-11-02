#include <bits/stdc++.h>

using namespace std;

int dp[45] = {0};

int Fibonacci(int n)
{
    if (n == 0 || n == 1)
        return n;
    if (dp[n] != 0)
        return dp[n];

    return dp[n] = Fibonacci(n - 1) + Fibonacci(n - 2);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n = 0;

    cin >> n;

    cout << Fibonacci(n) << endl;

    return 0;
}