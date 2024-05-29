#include <iostream>

using namespace std;

void calculate(int A, int B)
{
    int result = (A + B) * (A - B);

    cout << result << endl;
}

int main()
{
    int A, B;

    cin >> A >> B;

    calculate(A, B);

    return 0;
}