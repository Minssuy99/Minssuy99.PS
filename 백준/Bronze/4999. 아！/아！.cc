#include <iostream>
#include <string>

using namespace std;

int main() {
	string a;
	string w;

	getline(cin, a, '\n');
	getline(cin, w, '\n');

	if (a.size() >= w.size()) cout << "go";
	else cout << "no";

}