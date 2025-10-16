#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  double x, y;
  while (true)
  {
    cin >> x >> y;
    if (x == 0 && y == 0) break ;

    if (x == 0 || y == 0) cout << "AXIS\n";
    else if (x > 0 && y > 0) cout << "Q1\n";
    else if (x < 0 && y > 0) cout << "Q2\n";
    else if (x < 0 && y < 0) cout << "Q3\n";
    else cout << "Q4\n";
  }
  cout << "AXIS\n";

  return 0;
}