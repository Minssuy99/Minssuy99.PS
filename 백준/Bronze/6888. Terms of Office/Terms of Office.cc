#include <iostream>
using namespace std;

int main()
{
    int X, Y;
    cin >> X >> Y;

    const int cycle = 60;

    for (int year = X; year <= Y; year++)
    {
        if ((year - X) % cycle == 0) {
            cout << "All positions change in year " << year << "\n";
        }
    }

    return 0;
}
