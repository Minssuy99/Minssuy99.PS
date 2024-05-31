#include <iostream>

using namespace std;

int main()
{
    int T, H, W, customer;



    cin >> T;

    for (int i = 0; i < T; i++)
    {
        cin >> H >> W >> customer;

        int index = 0;

        int *room = new int[W*H]; // 101 201 301 401 501 102 202 302..

        for (int j = 1; j <= W; j++)
        {
            for (int k = 1; k <= H; k++)
            {
                room[index] = (k*100) + j;
                index++;
            }
        }
        cout << room[customer-1] << endl;
    }

    return 0;
}