#include <bits/stdc++.h>

using namespace std;

long long factorial(int n)
{
    long long result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;

    cin >> n >> k;

    int result = factorial(n) / (factorial(k) * factorial(n - k));

    cout << result;

    return 0;
}