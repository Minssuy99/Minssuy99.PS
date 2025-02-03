#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;

    string s;

    cin >> n >> s;
    cin.ignore();

    string s_front = s.substr(0, s.find('*'));
    string s_back = s.substr(s.find('*') + 1);

    for (int i = 0; i < n; i++)
    {
        string name;

        getline(cin, name);

        if (name.size() < s_front.size() || name.size() < s_back.size() || name.size() < s.size() - 1)
        {
            cout << "NE" << '\n';
        }
        else
        {
            string name_front = name.substr(0, s_front.size());
            string name_back = name.substr(name.size() - s_back.size());

            if (s_front == name_front && s_back == name_back)
            {
                cout << "DA" << '\n';
            }
            else
            {
                cout << "NE" << '\n';
            }
        }
    }

    return 0;
}