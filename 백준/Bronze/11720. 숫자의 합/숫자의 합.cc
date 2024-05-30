#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    int result = 0;
    string s;

    cin >> n;
    cin >> s;

    for(int i = 0; i < n; ++i)
    {
        result += s[i] - '0';
    }

    cout << result << endl;

    return 0;
}