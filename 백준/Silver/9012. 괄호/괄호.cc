#include <iostream>
#include <stack>

using namespace std;

string stackFunction(string s)
{
    stack<char> st;

    for (int j = 0; j < s.length(); j++)
    {
        if (s[j] == '(')
        {
            st.push('(');
        }
        else
        {
            if (!st.empty() == true)
            {
                st.pop();
            }
            else
            {
                return "NO";
            }
        }
    }
    if (st.empty() == true)
    {
        return "YES";
    }
    else
    {
        return "NO";
    }
}


int main()
{
    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string s;

        cin >> s;

        cout << stackFunction(s) << endl;
    }

    return 0;
}