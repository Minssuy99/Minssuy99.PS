#include <iostream>

using namespace std;

int main()
{
    int rank = 0;
    int Alphabet[26] = {};
    int Alphabet_size = sizeof(Alphabet) / sizeof(Alphabet[0]);
    char c;
    
    string s;

    cin >> s;


    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 97 && s[i] <= 122)
        {
            s[i] = s[i] - 32;

        }
            Alphabet[s[i] - 'A']++;
    }

    for (int i = 0; i < Alphabet_size; i++)
    {
        if (Alphabet[i] > rank)
        {
            rank = Alphabet[i];
            c = 'A' + i;
        }
        else if (rank == Alphabet[i])
        {
            c = '?';
        }
    }

    cout << c << endl;
    
    return 0;
}