// 2884. 알람시계
// https://www.acmicpc.net/problem/2884

#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;

    if (a == 0)
    {
        a = 24;
    }

    a *= 60;

    int result = a + b - 45;

    int result_hour = result / 60;
    int result_minute = result % 60;

    if (result_hour == 24)
    {
        result_hour = 0;
    }

    cout << result_hour << " " << result_minute << endl;

    return 0;
}