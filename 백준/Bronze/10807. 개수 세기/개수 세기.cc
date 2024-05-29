#include <iostream>

using namespace std;

int main()
{
    int N, V, A = 0;

    cin >> N;

    int *arr = new int[N];

    for (int i = 0; i < N; ++i)
    {
        cin >> arr[i];
    }

    cin >> V;

    for (int i = 0; i < N; ++i)
    {
        if (arr[i] == V)
        {
            A++;
        }
    }

    cout << A << endl;

    return 0;
}