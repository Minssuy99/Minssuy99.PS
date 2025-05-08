#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

char c[101][101];
int arr[101][101];

int main()
{
    memset(arr, -1, sizeof(arr));
    int h, w;

    cin >> h >> w;

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cin >> c[i][j];

            if (c[i][j] == 'c')
            {
                arr[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < h; i++)
    {
        for (int j = 1; j < w; j++)
        {
            if (arr[i][j] == 0)
                continue;

            if (arr[i][j - 1] == 0 && arr[i][j] == -1)
            {
                arr[i][j] = 1;
            }
            else if (arr[i][j - 1] > 0)
            {
                arr[i][j] = arr[i][j - 1] + 1;
            }
        }
    }

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}