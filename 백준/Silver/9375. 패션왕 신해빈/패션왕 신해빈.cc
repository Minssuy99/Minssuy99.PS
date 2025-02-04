#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        map<string, int> mp;
        int result = 1;
        
        int m;

        cin >> m;

        for (int j = 0; j < m; j++)
        {
            string cloth_name;
            string cloth_type;

            cin >> cloth_name >> cloth_type;

            mp[cloth_type]++;
        }

        for (auto it : mp)
        {
            result *= (it.second + 1);
        }

        cout << result - 1 << endl;
    }

    return 0;
}