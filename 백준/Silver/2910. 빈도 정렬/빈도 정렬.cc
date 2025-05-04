#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int n, c, a;
vector<pair<int, int>> vec;

int main()
{
    cin >> n >> c;

    for (int i = 0; i < n; i++)
    {
        int number;
        cin >> number;
        bool found = false;

        for (int j = 0; j < vec.size(); j++)
        {
            if (vec[j].first == number)
            {
                vec[j].second++;
                found = true;
                break;
            }
        }

        if (!found)
        {
            vec.push_back(make_pair(number, 1));
        }
    }

    for (int i = 0; i < vec.size(); i++)
    {
        a = max(a, vec[i].second);
    }

    for (int freq = a; freq > 0; --freq)
    {
        for (int i = 0; i < vec.size(); i++)
        {
            if (vec[i].second == freq)
            {
                for (int j = 0; j < freq; j++)
                {
                    cout << vec[i].first << " ";
                }
            }
        }
    }

    cout << endl;
    return 0;
}