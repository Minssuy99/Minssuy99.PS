#include <iostream>
using namespace std;

int main()
{
    int A, B, C, D;
    cin >> A >> B;
    cin >> C >> D;

    int hanyang = A + C;
    int yongdap = B + D;

    if (hanyang < yongdap)
    {
        cout << "Hanyang Univ.";
    } else if (hanyang > yongdap)
    {
        cout << "Yongdap";
    } else
    {
        cout << "Either";
    }

    return 0;
}
