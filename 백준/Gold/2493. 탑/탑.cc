#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> tower(n);
    vector<int> des(n, 0);
    stack<int> s;

    for (int i = 0; i < n; i++)
    {
        cin >> tower[i];
    }

    for (int i = 0; i < n; i++)
    {
        // 스택에 있는 타워보다 현재 타워가 높으면 pop하여 제거
        while (!s.empty() && tower[s.top()] < tower[i])
        {
            s.pop();
        }
        // 이긴 타워의 index + 1
        if (!s.empty())
        {
            des[i] = s.top() + 1;
        }
        else
        {
            des[i] = 0;
        }

        s.push(i); // 역대 이긴 타워들 스택에 추가.
    }

    for (int i = 0; i < n; i++)
    {
        cout << des[i] << " ";
    }

    return 0;
}