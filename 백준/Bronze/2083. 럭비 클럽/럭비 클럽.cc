#include <bits/stdc++.h>
using namespace std;

int main()
{
  string name;
  int age;
  int weight;
    
  while (true)
  {
    age = 0;
    weight = 0;
    name = "";
      
    cin >> name >> age >> weight;
      
    if (name == "#") break;
    if (age > 17 || weight >= 80)
      cout << name << " Senior" << endl;
    else
      cout << name << " Junior" << endl;
  }
}