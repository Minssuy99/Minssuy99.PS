#include <bits/stdc++.h>
#define endl '\n'

typedef long long ll;

using namespace std;

string s;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    while (true)
    {
        bool isAcceptable = false;
        cin >> s;

        if (s == "end")
            break;

        // 1차 검사 ---------------------------
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                isAcceptable = true;
            }
        }
        if (isAcceptable == false)
        {
            cout << "<" << s << "> " << "is not acceptable." << endl;
            continue;
        }

        // 2차 검사 ---------------------------
        int vowelCount = 0;
        int consonantCount = 0;

        for (int i = 0; i < s.size(); i++)
        {
            char ch = s[i];
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                vowelCount++;
                consonantCount = 0;
            }
            else
            {
                consonantCount++;
                vowelCount = 0;
            }

            if (vowelCount == 3 || consonantCount == 3)
            {
                isAcceptable = false;
                break;
            }
        }
        if (isAcceptable == false)
        {
            cout << "<" << s << "> " << "is not acceptable." << endl;
            continue;
        }

        // 3차 검사 ---------------------------
        int sub_stack = 0;
        char c = ' ';
        for (int i = 0; i < s.size(); i++)
        {
            if (c != s[i])
            {
                c = s[i];
            }
            else
            {
                if (s[i] == 'e' || s[i] == 'o')
                    continue;
                else
                {
                    isAcceptable = false;
                    break;
                }
            }
        }

        if (isAcceptable == false)
        {
            cout << "<" << s << "> " << "is not acceptable." << endl;
            continue;
        }
        else
        {
            cout << "<" << s << "> " << "is acceptable." << endl;
        }
    }

    return 0;
}