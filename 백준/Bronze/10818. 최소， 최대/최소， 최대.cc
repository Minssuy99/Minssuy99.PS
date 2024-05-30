#include <iostream>

using namespace std;

int main()
{
    int N;
    int number;
    int min = 1000000;
    int max = -10000000;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> number;

        if (number > max)
        {
            max = number;
        }

        if (number < min)
        {
            min = number;
        }
    }

    cout << min << " " << max << endl;
}
