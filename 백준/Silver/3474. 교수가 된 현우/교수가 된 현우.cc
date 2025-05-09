#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int number;
        cin >> number;

        int count = 0;

        for (long long i = 5; number / i >= 1; i *= 5)
        {
            count += number / i;
        }

        cout << count << endl;
    }

    return 0;
}
