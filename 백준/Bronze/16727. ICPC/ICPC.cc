#include <iostream>
using namespace std;

int main()
{
    int p1, s1, s2, p2;
    cin >> p1 >> s1;
    cin >> s2 >> p2;

    int persepolis_total = p1 + p2;
    int esteghlal_total = s1 + s2;

    if (persepolis_total > esteghlal_total)
    {
        cout << "Persepolis";
    } else if (persepolis_total < esteghlal_total)
    {
        cout << "Esteghlal";
    } else
    {
        if (p2 > s1)
        {
            cout << "Persepolis";
        } else if (p2 < s1)
        {
            cout << "Esteghlal";
        } else {
            cout << "Penalty";
        }
    }
    return 0;
}
