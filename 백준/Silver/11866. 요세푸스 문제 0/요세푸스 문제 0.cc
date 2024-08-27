#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> q;
    int n, k;   // 1 ~ n 번까지 사람이 있고, k번째 사람을 제거한다.

    cin >> n >> k;

    for (int i = 1; i <= n; i++)
    {
        q.push(i);
    }

    cout << "<";

    while(n)    // 사람 수
    {
        for (int i = 1; i < k; i++)
        {
            q.push(q.front());
            q.pop();   // 2 3 4 5 6 7 1 > 3 4 5 6 7 1 2
        }

        cout << q.front();

        if (q.size() != 1)  // 마지막 콤마 생략
        {
            cout << ", ";
        }

        q.pop();

        n -= 1;
    }

    cout << ">";

    return 0;
}