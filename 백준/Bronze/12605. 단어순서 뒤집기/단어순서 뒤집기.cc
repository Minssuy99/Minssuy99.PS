#include <iostream>
#include <sstream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    int n;
    int cnt = 1;
    stack<string> st;

    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        string word;
        string sentence;
        getline(cin, sentence);
        istringstream stream(sentence);

        while (stream >> word)
        {
            st.push(word);
        }

        cout << "Case #" << cnt << ": ";
        ++cnt;

        while (!st.empty())
        {
            cout << st.top() << " ";
            st.pop();
        }
        cout << '\n';
    }

    return 0;
}