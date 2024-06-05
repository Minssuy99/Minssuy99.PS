#include <iostream>

using namespace std;

int main()
{
    int n;
    
    int result = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int number;
        cin >> number;

        result += number;
    }

    cout << result << endl;

    return 0;
}