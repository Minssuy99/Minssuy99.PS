#include <iostream>

using namespace std;

int main()
{
    int number;
    int socks[10] = { 0 };

    for (int i = 0; i < 5; i++)
    {
        cin >> number;
        socks[number]++;
    }

    for (int i = 0; i < 10; i++)
    {
        if(socks[i] % 2 != 0)
        {
            cout << i << " ";
        }
    }

    return 0;
}