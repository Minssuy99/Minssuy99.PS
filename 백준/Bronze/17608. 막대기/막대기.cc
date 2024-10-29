#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int n;
    int high = 0;
    int result = 1;
    stack<int> st;

    cin >> n;

    for (int i = 0; i < n; i++)
    {

        int number = 0;

        cin >> number;

        if (number >= high)
        {
            st.push(number);
            high = number;
            result = 1;
        }
        else if (number < st.top())
        {
            st.push(number);
            result++;
        }
        else
        {
            if (!st.empty())
            {
                while (number >= st.top())
                {
                    if (st.empty())
                        break;

                    st.pop();
                    result--;
                }
                st.push(number);
                result++;
            }
        }
    }

    cout << result << endl;

    return 0;
}