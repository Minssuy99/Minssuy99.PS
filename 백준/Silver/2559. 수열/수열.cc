#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b;
    int top = (1 << 31);

    cin >> a >> b;

    vector<int> vec(a);

    for (int i = 0; i < a; i++)
    {
        cin >> vec[i];
    }

    vector<int> vec2(a - b + 1, 0);

    for (int i = 0; i <= a - b; i++)
    {
        vec2[i] = vec[i];

        for (int j = 1; j < b; j++)
        {
            vec2[i] += vec[i + j];
        }
        if (vec2[i] > top)
        {
            top = vec2[i];
        }
    }

    cout << top;

    return 0;
}
