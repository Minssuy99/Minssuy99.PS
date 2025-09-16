#include <iostream>
#include <string>
using namespace std;

int main()
{
    string line;
    while (getline(cin, line))
    {
        for (char &ch : line)
        {
            if (ch == 'i') ch = 'e';
            else if (ch == 'e') ch = 'i';
            else if (ch == 'I') ch = 'E';
            else if (ch == 'E') ch = 'I';
        }
        cout << line << '\n';
    }
    return 0;
}
