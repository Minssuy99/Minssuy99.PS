#include <iostream>

using namespace std;

int main()
{
    int N = 0;
    
    cin >> N;

    if (N >=1 && N <=9)
    {
        for (int i = 1; i<= 9; ++i)
        {
            cout << N  << " * " << i << " = " << N * i << endl;
        }
    }

    return 0;
}