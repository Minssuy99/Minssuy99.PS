#include <iostream>
using namespace std;

int main()
{
    int D, H, M;
    cin >> D >> H >> M;
    int start = (11 * 24 * 60) + (11 * 60) + 11;

    int end = (D * 24 * 60) + (H * 60) + M;

    int result = end - start;
    if (result < 0) cout << -1;
    else cout << result;
    return 0;
}
