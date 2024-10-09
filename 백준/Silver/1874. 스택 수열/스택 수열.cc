#include <iostream>
#include <stack>


using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int seq[1000001];
    string result;

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
        result += "+\n";

        while(!st.empty() && seq[index] == st.top())
        {
            st.pop();
            result += "-\n";
            index++;
        }
    }

    if(st.empty())
    {
        cout << result;
    }
    else
    {
        cout << "NO\n";
    }

}