#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> st;

    int n;
    int number;
    int result = 0;

    cin >> n;

    if (n >= 1 && n <= 100000)
    {

        for (int i = 0; i < n; i++)
        {
            cin >> number;

            if (number == 0)
            {
                st.pop();
            }
            else
            {
                st.push(number);
            }
        }

        while (!st.empty())
        {
            result += st.top();
            st.pop();
        }

        cout << result << endl;
    }

    return 0;
}