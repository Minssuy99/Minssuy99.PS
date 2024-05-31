#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[10] = {};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    int diff = 1;

    for (int i = 0; i < arr_size; i++)
    {
        cin >> arr[i];
        arr [i] %= 42;
    }
    sort(arr, arr + 10);
    
    for (int i = 0; i < arr_size-1; i++)
    {
        if(arr[i] != arr[i+1])
        {
            diff++;
        }
    }

    cout << diff << endl;

    return 0;
}