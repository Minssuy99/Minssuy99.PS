#include <iostream>
using namespace std;

int main()
{
	int t, num1, num2;
	cin >> t;

	for (int i = 1; i < t + 1; i++) {
		cin >> num1 >> num2;
		cout << "Case " << i << ": " << num1 + num2 << '\n';
	}

	return 0;
}