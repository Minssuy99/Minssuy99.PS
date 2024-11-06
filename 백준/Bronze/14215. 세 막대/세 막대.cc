#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> vec;

    for (int i = 0; i < 3; i++)
    {
        int number;
        cin >> number;

        vec.push_back(number);
    }

    sort(vec.begin(), vec.end());

    if (vec[0] + vec[1] <= vec[2])
    {
        vec[2] = vec[0] + vec[1] - 1;
    }

    cout << vec[0] + vec[1] + vec[2] << '\n';

    return 0;
}