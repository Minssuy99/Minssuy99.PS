#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, M, result = 0;
    cin >> N;
    vector<int> menus(N);
    

    for (int i = 0; i < N; ++i)
    {
        cin >> menus[i];
    }


    cin >> M;

    for (int i = 0; i < M; ++i)
    {
        int order;
        cin >> order;
        result += menus[order - 1];
    }

    cout << result << endl;

    return 0;
}