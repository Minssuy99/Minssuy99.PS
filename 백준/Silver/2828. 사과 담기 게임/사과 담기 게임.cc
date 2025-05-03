#include <bits/stdc++.h>

#define endl '\n'

typedef long long ll;

using namespace std;

int n, m, j, ret;

int front = 1;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m >> j;

    for (int i = 0; i < j; i++)
    {
        int number;
        cin >> number;

        int back = front + m - 1;

        if (number < front)
        {
            ret += (front - number);
            front = number;
        }
        else if (number > back)
        {
            ret += (number - back);
            front += (number - back);
        }
    }

    cout << ret << endl;

    return 0;
}