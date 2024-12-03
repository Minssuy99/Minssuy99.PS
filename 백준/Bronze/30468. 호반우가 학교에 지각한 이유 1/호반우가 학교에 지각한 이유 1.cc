#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int STR, DEX, INT, LUK, n;
    cin >> STR >> DEX >> INT >> LUK >> n;

    int count = 0;
    int total = STR + DEX + INT + LUK;

    while (total < n * 4)
    {
        count++;
        total++;
    }

    cout << count;

    return 0;
}
