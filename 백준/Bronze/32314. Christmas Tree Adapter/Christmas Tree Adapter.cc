#include <iostream>
using namespace std;

int main()
{
    int treeAmpere;
    cin >> treeAmpere;

    int w, v;
    cin >> w >> v;

    int adapterAmpere = w / v;

    if (adapterAmpere >= treeAmpere)
    {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}
