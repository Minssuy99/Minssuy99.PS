#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    char c;
    long long M = 1234567891;
    int L;
    long long hash = 0;

    cin >> L;
    cin >> str;

    long long r = 1;

    for (int i = 0; i < L; i++)
    {
        c = str[i];
        hash = (hash + (c - 96) * r) % M;
        r = (r * 31) % M;
    }

    cout << hash;

    return 0;
}