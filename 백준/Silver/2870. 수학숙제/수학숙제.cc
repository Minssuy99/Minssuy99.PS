#include <bits/stdc++.h>

using namespace std;

bool compare(string a, string b)
{
    if (a.size() == b.size())
    {
        return a < b;
    }
    else
    {
        return a.size() < b.size();
    }
}

string zeroCheck(string s)
{
    string number = "";

    bool flag = false;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '0')
        {
            number += s[i];
            flag = true;
        }
        else if (flag && s[i] == '0')
        {
            number += '0';
        }
    }

    if (!flag)
    {
        return "0";
    }
    else
    {
        return number;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<string> vec;

    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string s;
        string ss = "";

        cin >> s;

        for (int j = 0; j < s.size(); j++)
        {

            if (s[j] >= '0' && s[j] <= '9')
            {
                ss += s[j];
            }
            else
            {
                if (ss.size() > 0)
                {
                    vec.push_back(zeroCheck(ss));
                    ss = "";
                }
                else
                {
                    continue;
                }
            }
        }

        if (ss.size() > 0)
        {
            vec.push_back(zeroCheck(ss));
        }
    }

    sort(vec.begin(), vec.end(), compare);

    for (string str : vec)
    {
        cout << str << "\n";
    }

    return 0;
}
