#include <iostream>

using namespace std;

int main()
{
    string grade;
    float score = 0;

    cout << fixed;
    cout.precision(1);

    cin >> grade;

    switch(grade[0])
    {
        case 'A':
            score += 4.0f;
            break;
        case 'B':
            score += 3.0f;
            break;            
        case 'C':
            score += 2.0f;
            break;
        case 'D':
            score += 1.0f;
            break;
    }

    switch (grade[1])
    {
        case '+':
            score += 0.3f;
            break;
         case '-':
            score -= 0.3f;
            break;
    }

    cout << score << endl;

    return 0;
}