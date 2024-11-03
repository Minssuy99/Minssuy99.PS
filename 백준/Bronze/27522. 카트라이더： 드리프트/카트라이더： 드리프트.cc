#include <bits/stdc++.h>

using namespace std;

struct Point
{
    string s_time;
    int real_time;
    char team;
};

bool compare(const Point &a, const Point &b)
{
    return a.real_time < b.real_time;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int redTeam_Point = 0;
    int blueTeam_Point = 0;
    int point_list[] = {10, 8, 6, 5, 4, 3, 2, 1};

    vector<Point> info(8);

    for (int i = 0; i < 8; i++)
    {
        cin >> info[i].s_time >> info[i].team;

        for (int k = 0; k < info[i].s_time.size(); k++)
        {
            if (info[i].s_time[k] == ':')
            {
                info[i].s_time[k] = '0';
            }
        }
        info[i].real_time = stoi(info[i].s_time);
    }

    sort(info.begin(), info.end(), compare);

    for (int i = 0; i < 8; i++)
    {
        if (info[i].team == 'B')
        {
            blueTeam_Point += point_list[i];
        }
        else
        {
            redTeam_Point += point_list[i];
        }
    }

    if (redTeam_Point > blueTeam_Point)
    {
        cout << "Red" << '\n';
    }
    else
    {
        cout << "Blue" << '\n';
    }

    return 0;
}