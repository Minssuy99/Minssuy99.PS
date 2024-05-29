#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int result = 0;

    int arr[5] = {};

    int arr_size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < arr_size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < arr_size; i++)
    {
        result += pow(arr[i], 2);
    }

    cout << result % 10 << endl;

    return 0;
}