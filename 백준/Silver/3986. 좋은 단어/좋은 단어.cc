#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int ret = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        stack<char> st;
        string s;

        cin >> s;

        if (s.size() % 2 == 0)
        {

            for (int j = 0; j < s.size(); j++)
            {
                char c = ' ';

                if (!st.empty())
                    c = st.top();

                st.push(s[j]);

                if (c == st.top())
                {
                    st.pop();
                    st.pop();
                }
            }

            if (st.empty())
            {
                ret++;
            }
        }
    }

    cout << ret;

    return 0;
}