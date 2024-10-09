#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int seq[1000001];
    vector<string> s;
    stack<int> st;

    int n;
    int num;
    int index = 0;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> num;
        seq[i] = num;
    }

    for(int i = 1; i <= n; i++)
    {
        st.push(i);
        s.push_back("+");

        while(!st.empty() && seq[index] == st.top())
        {
            st.pop();
            s.push_back("-");
            index++;
        }
    }

    if(st.empty())
    {
        for(int i = 0; i < s.size(); i++)
        {
            cout << s[i]<< '\n';
        }
    }
    else
    {
        cout << "NO" << '\n';
    }

}