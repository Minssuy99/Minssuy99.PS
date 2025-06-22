#include <iostream>
 
using namespace std;
 
int main()
{
    int n, i = 1;
 
    while (i) {
        cin >> n;
        if (n == 0) break;
 
        cout << i << ". ";
 
        n *= 3;
        if (n % 2) {
            cout << "odd ";
            n = (n + 1) / 2;
            n = 3 * n;
            n = n / 9;
            cout << n << "\n";
 
        }
        else {
            cout << "even ";
            n = n / 2;
            n = 3 * n;
            n = n / 9;
            cout << n << "\n";
        }
        i++;
    }
 
    return 0;
}