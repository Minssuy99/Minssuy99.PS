#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;

	while (true)
    {
		getline(cin, s);
		if (s == "END")
        {
			break;
		}
		reverse(s.begin(), s.end());
		cout << s << endl;
	}

	return 0;
}