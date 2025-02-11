#include <bits/stdc++.h>

using namespace std;

int power(int a, int b, int c)
{
    if (b == 1)
    {
        return a % c;
    }

    long long half = power(a, b / 2, c);
    half = (half * half) % c;

    if (b % 2 == 1)
    {
        half = (half * a) % c;
    }

    return half;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c;

    cin >> a >> b >> c;

    cout << power(a, b, c);

    return 0;
}