#include <iostream>

using namespace std;

int main()
{
    string s;
    bool isTrue = false;

    cin >> s;

    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == 'p')
        {
            if(s[i+1] == 'i')
            {
                isTrue = true;
                i += 1;
            }
            else
            {
                isTrue = false;
                break;
            }
        }
        else if(s[i] == 'k')
        {
            if(s[i+1] == 'a')
            {
                isTrue = true;
                i += 1;
            }
            else
            {
                isTrue = false;
                break;
            }
        }
        else if(s[i] == 'c')
        {
            if(s[i+1] == 'h' && s[i+2] == 'u')
            {
                isTrue = true;
                i += 2;
            }
            else
            {
                isTrue = false;
                break;
            }
        }
        else
        {
            isTrue = false;
            break;
        }
    }

    if(isTrue == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}