#include <iostream>

using namespace std;

int main()
{
    int T;
    int score = 0;
    int add = 0;
    string quiz;

    cin >> T;

    for (int i = 0; i < T; i++)
    {
        cin >> quiz;

        for (int j = 0; j < quiz.length(); j++)
        {
            if(quiz[j] == 'O')
            {
                add++;
                score += add;
            }
            else
            {
                add = 0;
            }
        }
        cout << score << endl;
        score = 0;
        add = 0;
    }

    return 0;
}