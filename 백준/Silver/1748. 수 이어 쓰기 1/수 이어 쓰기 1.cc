#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int result = 0;

    for (int i = 1; i <= n; i *= 10)
    {
        result += n - i + 1;
    }

    cout << result << '\n';
    
    return 0;
}