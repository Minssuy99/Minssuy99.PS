#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--)
    {
        string s;
        cin >> s;
        string result;
        result.reserve(s.size());
        result.push_back(s[0]);
        for (int i = 1; i < (int)s.size(); i++)
        {
            if (s[i] != s[i - 1])
            {
                result.push_back(s[i]);
            }
        }
        cout << result << "\n";
    }
    return 0;
}
