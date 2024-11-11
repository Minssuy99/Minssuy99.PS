#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n;

    vector<int> vec1(n);

    for (int i = 0; i < n; i++)
    {
        cin >> vec1[i];
    }

    cin >> m;
    vector<int> vec2(m);

    for (int i = 0; i < m; i++)
    {
        cin >> vec2[i];
    }

    sort(vec1.begin(), vec1.end());

    for (int i = 0; i < m; i++)
    {
        if (binary_search(vec1.begin(), vec1.end(), vec2[i]))
        {
            cout << "1 ";
        }
        else
        {
            cout << "0 ";
        }
    }

    return 0;
}