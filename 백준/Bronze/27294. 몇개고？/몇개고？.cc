#include <bits/stdc++.h>

using namespace std;

int n, m;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;
    
	if (12 <= n && n <= 16 && m == 0)
        cout << 320;
	else
        cout << 280;
}