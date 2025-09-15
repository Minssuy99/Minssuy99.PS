#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    cin >> N >> M;

    vector<string> patrol(N);
    for (int i = 0; i < N; i++)
    {
        cin >> patrol[i];
    }

    for (int t = 0; t < M; t++)
    {
        bool safe = true;
        for (int i = 0; i < N; i++) {
            if (patrol[i][t] == 'O') {
                safe = false;
                break;
            }
        }
        if (safe)
        {
            cout << t + 1 << "\n";
            return 0;
        }
    }

    cout << "ESCAPE FAILED\n";
    return 0;
}
