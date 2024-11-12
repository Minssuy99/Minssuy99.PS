#include <bits/stdc++.h>

using namespace std;

string WB[8] = {"WBWBWBWB", "BWBWBWBW", "WBWBWBWB", "BWBWBWBW", "WBWBWBWB", "BWBWBWBW", "WBWBWBWB", "BWBWBWBW"};

string BW[8] = {"BWBWBWBW", "WBWBWBWB", "BWBWBWBW", "WBWBWBWB", "BWBWBWBW", "WBWBWBWB", "BWBWBWBW", "WBWBWBWB"};

string s[50];

int check_WB(int a, int b)
{
    int count = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int k = 0; k < 8; k++)
        {
            if (s[a + i][b + k] != WB[i][k])
            {
                count++;
            }
        }
    }
    return count;
}

int check_BW(int a, int b)
{
    int count = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int k = 0; k < 8; k++)
        {
            if (s[a + i][b + k] != BW[i][k])
            {
                count++;
            }
        }
    }
    return count;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    int result = 64;

    for (int i = 0; i + 8 <= n; i++)
    {
        for (int k = 0; k + 8 <= m; k++)
        {
            int check = min(check_BW(i, k), check_WB(i, k));
            if (result > check)
            {
                result = check;
            }
        }
    }

    cout << result << '\n';

    return 0;
}