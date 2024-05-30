#include <iostream>

using namespace std;

int main()
{
    int T;

    int repeat;

    string s;

    cin >> T;

    for (int i = 0; i< T; i++)
    {
        cin >> repeat >> s;

        for (int j = 0; j < s.length(); j++)
        {
            for (int k = 0; k < repeat; k++)
            {
                cout << s[j];
            }
        }
        cout << endl;
    }

    return 0;
}