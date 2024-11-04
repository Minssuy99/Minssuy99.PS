#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int result = 0;
    bool isZero = true;

    int n;
    int res = 0;

    cin >> n;

    if (n == 0)
    {
        cout << n;
        return 0;
    }

    vector<int> numbers(n);

    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    sort(numbers.begin(), numbers.end());

    int idx = round(n * 0.15);
    double sum = 0;

    for (int i = idx; i < n - idx; i++)
        sum += numbers[i];

    res = round(sum / (n - idx * 2));

    cout << res;

    return 0;
}
