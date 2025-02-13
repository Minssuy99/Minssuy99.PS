#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    while (cin >> n)
    {                  
        int num = 1;
        int count = 1; 

        while (num % n != 0)
        {              
            num = (num * 10 + 1) % n;
            count++;
        }
        cout << count << '\n';
    }

    return 0;
}