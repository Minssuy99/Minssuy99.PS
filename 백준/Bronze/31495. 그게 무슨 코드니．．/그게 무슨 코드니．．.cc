#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string S;
    getline(cin, S);

    if (S.length() <= 2 || !(S.front() == '\"' && S.back() == '\"'))
    {
        cout << "CE";
    }
    else
    {
        for (int i = 1; i < S.length() - 1; ++i)
        {
            cout << S[i];
        }
    }
    return 0;
}