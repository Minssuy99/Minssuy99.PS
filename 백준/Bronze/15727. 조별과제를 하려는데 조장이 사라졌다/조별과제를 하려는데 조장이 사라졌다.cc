#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int distance = 0;
    int count = 0;

    cin >> n;

    if (n == 0)
        return 0;

    while (true)
    {
        if (n <= distance)
            break;
        distance += 5;
        count++;
    }

    cout << count << endl;

    return 0;
}