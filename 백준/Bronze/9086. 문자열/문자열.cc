#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    int T;

    cin >> T;

    string s;

    while(i < T)
    {
        cin >> s;

        cout << s[0] << s[s.length()-1] << endl;

        i++;
    }

    return 0;
}