#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, Temp, Res = 0;
    cin >> n;
    Res += (n - 1) * 8;
    for (int i = 0; i < n; i++)
    {
        cin >> Temp;
        Res += Temp;
    }
    cout << Res / 24 << " " << Res % 24;

    return 0;
}