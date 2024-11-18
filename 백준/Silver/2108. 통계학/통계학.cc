#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int mean, median, mode, range;

    int n;
    cin >> n;

    vector<int> vec;
    vector<int> vecvec(8001, 0);

    for (int i = 0; i < n; i++)
    {
        int number;
        cin >> number;
        vec.push_back(number);
        vecvec[4000 + number]++;
    }

    int max_freq = 0;
    bool secondMod = false;
    for (int i = 0; i < 8001; i++)
    {
        if (vecvec[i] > max_freq)
        {
            max_freq = vecvec[i];
            mode = i - 4000;
            secondMod = true;
        }
        else if (vecvec[i] == max_freq && secondMod)
        {
            mode = i - 4000;
            secondMod = false;
        }
    }

    sort(vec.begin(), vec.end());

    mean = round((double)accumulate(vec.begin(), vec.end(), 0) / n);

    if (n == 1)
    {
        median = vec[0];
    }
    else
    {
        median = vec[(n - 1) / 2];
    }

    range = vec[n - 1] - vec[0];

    cout << mean << '\n';
    cout << median << '\n';
    cout << mode << '\n';
    cout << range << '\n';

    return 0;
}