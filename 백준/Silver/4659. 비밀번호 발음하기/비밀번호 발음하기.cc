#include <bits/stdc++.h>

using namespace std;

bool isVowel(char c)
{
    return string("aeiou").find(c) != string::npos;
}

bool hasVowel(const string &s) // 모음 체크
{
    for (char c : s)
        if (isVowel(c))
            return true;
    return false;
}

bool noThreeInARow(const string &s) // 자모 연속 3개
{
    int vowelCount = 0, consonantCount = 0;
    for (char c : s)
    {
        if (isVowel(c))
        {
            vowelCount++;
            consonantCount = 0;
        }
        else
        {
            consonantCount++;
            vowelCount = 0;
        }
        if (vowelCount == 3 || consonantCount == 3)
            return false;
    }
    return true;
}

bool noInvalidDouble(const string &s) // 연속 2개
{
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1] && s[i] != 'e' && s[i] != 'o')
            return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    while (cin >> s && s != "end")
    {
        if (hasVowel(s) && noThreeInARow(s) && noInvalidDouble(s))
        {
            cout << "<" << s << "> is acceptable.\n";
        }
        else
        {
            cout << "<" << s << "> is not acceptable.\n";
        }
    }
    return 0;
}