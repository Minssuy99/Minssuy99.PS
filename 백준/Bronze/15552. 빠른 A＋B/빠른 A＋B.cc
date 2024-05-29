#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T = 0;
    int i = 0;

    cin >> T;

    while (i < T)
    {
        int A, B = 0;

        cin >> A >> B;

        cout << A + B << "\n";

        i++;
    }

return 0;

}