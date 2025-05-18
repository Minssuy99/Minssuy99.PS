#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main()
{
    int n;

    cin >> n;

    stack<int> st;
    vector<int> vec(n);
    vector<int> answer(n);

    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    for (int i = vec.size() - 1; i >= 0; i--)
    {
        while (!st.empty() && st.top() <= vec[i])
        {
            st.pop();
        }

        if (st.empty())
        {
            answer[i] = -1;
        }
        else
        {
            answer[i] = st.top();
        }

        st.push(vec[i]);
    }

    for (int i : answer)
    {
        cout << i << ' ';
    }

    return 0;
}