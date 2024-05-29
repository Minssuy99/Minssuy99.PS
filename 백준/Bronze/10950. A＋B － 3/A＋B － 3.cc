#include <iostream>

using namespace std;

int main()
{
    int T = 0;
    int i = 0;

    cin >> T;

    while(i < T)
    {
        int A, B = 0;
        cin >> A >> B;

        cout << A + B << endl;

        i++;
    }

    return 0;
}