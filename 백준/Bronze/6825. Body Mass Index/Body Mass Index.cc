#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  double w, h; cin >> w >> h;

  double bmi = w / pow(h, 2);

  string ans = "";
  if (bmi < 18.5) ans = "Underweight";
  else if (bmi >= 18.5 && bmi < 25) ans = "Normal weight";
  else if (bmi >= 25) ans = "Overweight";

  cout << ans << "\n";

  return 0;
}