#include <iostream>

using namespace std;

double co, ek;

int main()
{
	int a, b, c, d, e, f;

	cin >> a >> b >> c >> d >> e >> f;
	co = a * 13 + b * 7 + c * 5 + d * 3 + e * 3 + f * 2;
	cin >> a >> b >> c >> d >> e >> f;
	ek = a * 13 + b * 7 + c * 5 + d * 3 + e * 3 + f * 2 + 1.5;

	if (co > ek) cout << "cocjr0208" << endl;
	else cout << "ekwoo" << endl;
}