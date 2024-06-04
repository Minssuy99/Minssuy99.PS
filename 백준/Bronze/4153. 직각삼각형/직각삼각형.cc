// 4153. 직각삼각형
// https://www.acmicpc.net/problem/4153

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int number[3];

    while(true)
    {
        for(int i = 0; i < 3; i++)
        {
            cin >> number[i];
        }

        if(number[0] == 0 && number[1] == 0 && number[2] == 0)
        {
            break;
        }

        sort(number, number+ 3);

        if ((number[0]*number[0] + number[1]*number[1]) == number[2]*number[2])
        {
            cout << "right" << endl;
        }
        else
        {
            cout << "wrong" << endl;
        }
    }
    return 0;
}