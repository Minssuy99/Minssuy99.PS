#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, a = 0, b = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        if (c == 'D')
            a++;
        else
            b++;
        if (abs(a - b) > 1)
            break;
    }
    cout << a << ":" << b;
    return 0;
}