#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;

    cin >> n;

    deque<int> deq;
    vector<int> vec(n);
    vector<int> input(n);

    for (int i = n - 1; i >= 0; i--)
    {
        vec[i] = i + 1;

        cin >> input[i];
    }

    for (int i = 0; i < n; i++)
    {
        switch (input[i])
        {
        case 1:
            deq.push_front(vec[i]);
            break;
        case 2:
            deq.insert(deq.begin() + 1, vec[i]);
            break;
        case 3:
            deq.push_back(vec[i]);
            break;
        }
    }

    for (int value : deq)
    {
        cout << value << " ";
    }

    return 0;
}