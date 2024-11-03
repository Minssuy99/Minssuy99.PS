#include <bits/stdc++.h>

using namespace std;

int n;
double addtest = 0;
vector<double> test;

double cal(double a)
{
    return a / test[0] * 100;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        double num;

        cin >> num;

        test.push_back(num);
    }

    sort(test.rbegin(), test.rend());

    for (int i = 0; i < n; i++)
    {
        addtest += cal(test[i]);
    }

    cout << addtest / n << '\n';

    return 0;
}