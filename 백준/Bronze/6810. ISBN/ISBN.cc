#include <iostream>
#include <string>
using namespace std;

int main()
{
    string base = "9780921418";
    string num = base;


    for (int i = 0; i < 3; i++)
    {
        char c;
        cin >> c;
        num += c;
    }

    int sum = 0;
    for (int i = 0; i < 13; i++)
    {
        int digit = num[i] - '0';
        if (i % 2 == 0)
        {
            sum += digit * 1;
        } else {
            sum += digit * 3;
        }
    }

    cout << "The 1-3-sum is " << sum << endl;
    return 0;
}
