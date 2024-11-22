#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int person, t_shirt_pack, pen_pack;
    cin >> person;

    vector<int> t_shirt_size(6);

    for (int i = 0; i < 6; i++)
    {
        cin >> t_shirt_size[i];
    }

    cin >> t_shirt_pack >> pen_pack;

    int t_shirt_result = 0;

    for (int i = 0; i < t_shirt_size.size(); i++)
    {
        int number = 0;
        if (t_shirt_size[i] % t_shirt_pack != 0)
        {
            number = t_shirt_size[i] / t_shirt_pack + 1;
        }
        else
        {
            number = t_shirt_size[i] / t_shirt_pack;
        }

        t_shirt_result += number;
    }

    cout << t_shirt_result << '\n';
    cout << person / pen_pack << " " << person % pen_pack;

    return 0;
}