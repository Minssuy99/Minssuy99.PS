#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<string> str;
    int num;
    int pos;

    for (int i = 0; i < 3; i++)
    {
        string s;
        cin >> s;

        str.push_back(s);

        if (str[i][0] >= '0' && str[i][0] <= '9')
        {
            num = stoi(str[i]);
            pos = i;
        }
    }

    int result = num + 3 - pos;

    if (result % 15 == 0)
    {
        cout << "FizzBuzz" << '\n';
    }
    else if (result % 5 == 0)
    {
        cout << "Buzz" << '\n';
    }
    else if (result % 3 == 0)
    {
        cout << "Fizz" << '\n';
    }
    else
    {
        cout << result << '\n';
    }
}