#include <iostream>
using namespace std;

int main()
{
    int N, A, B;
    cin >> N >> A >> B;

    if (N > B)
    {
        cout << "Bus" << endl;
    } else
    {
        if (A < B) {
            cout << "Bus" << endl;
        } else if (A > B) {
            cout << "Subway" << endl;
        } else {
            cout << "Anything" << endl;
        }
    }

    return 0;
}
