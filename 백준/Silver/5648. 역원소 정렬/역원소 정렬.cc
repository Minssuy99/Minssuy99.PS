#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    cin.ignore();

    vector<long long> vec;
    string line;

    while (getline(cin, line))
    {
        stringstream ss(line);
        string number;

        while (ss >> number)
        {
            reverse(number.begin(), number.end());


            long long reversedNum = stoll(number);

            vec.push_back(reversedNum);
        }
    }

    sort(vec.begin(), vec.end());

    for (const auto &num : vec)
    {
        cout << num << '\n';
    }

    return 0;
}
