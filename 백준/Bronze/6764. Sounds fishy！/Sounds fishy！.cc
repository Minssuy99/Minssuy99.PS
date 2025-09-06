#include <iostream>
using namespace std;

int main()
{
    int a[4];
    for (int i = 0; i < 4; i++) cin >> a[i];

    bool rising = (a[0] < a[1] && a[1] < a[2] && a[2] < a[3]);
    bool diving = (a[0] > a[1] && a[1] > a[2] && a[2] > a[3]);
    bool constant = (a[0] == a[1] && a[1] == a[2] && a[2] == a[3]);

    if (rising) cout << "Fish Rising\n";
    else if (diving) cout << "Fish Diving\n";
    else if (constant) cout << "Fish At Constant Depth\n";
    else cout << "No Fish\n";

    return 0;
}
