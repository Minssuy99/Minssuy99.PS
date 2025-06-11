#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cin >> input;

    if (input == "SONGDO") {
        cout << "HIGHSCHOOL" << endl;
    } else if (input == "CODE") {
        cout << "MASTER" << endl;
    } else if (input == "2023") {
        cout << "0611" << endl;
    } else if (input == "ALGORITHM") {
        cout << "CONTEST" << endl;
    }

    return 0;
}
