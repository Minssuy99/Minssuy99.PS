#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int sz, a, b, c;
    cin >> sz;
    while(sz--){
    	cin >> a >> b >> c;
    	cout << min(a, min(b, c)) << endl;
	}
    return 0;
}