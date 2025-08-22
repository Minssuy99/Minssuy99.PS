#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, x; cin >> n >> x;

  vector<int> v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i];

  ll ans = 1e18;
  for (int i = 0; i < n - 1; i++)
    ans = min(ans, 1LL * x * (v[i] + v[i + 1]));

  cout << ans << "\n";

  return 0;
}