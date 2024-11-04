#include <bits/stdc++.h>

using namespace std;

bool isPrime(int num)
{
    if (num <= 1) // 만약 1 또는 0이라면 false;
        return false;

    for (int i = 2; i <= sqrt(num); i++) // 2부터 체크시작.
    {
        if (num % i == 0) // 나누어 떨어지는게 있다면
        {
            return false; // 그 숫자는 소수가 아님.
        }
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, count = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (isPrime(num))
        {
            count++;
        }
    }

    cout << count;

    return 0;
}