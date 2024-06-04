#include <iostream>
#include <stack>
#include <sstream>

using namespace std;

int main() {
    int n;
    stack<int> st;

    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        string s;
        string command;

        getline(cin, s);

        stringstream ss(s);
        ss >> command;

        if (command == "push") {
            int value;
            ss >> value;
            st.push(value);
        } else if (command == "top") {
            if (!st.empty()) {
                cout << st.top() << endl;
            } else {
                cout << "-1" << endl;
            }
        } else if (command == "pop") {
            if (!st.empty()) {
                int popNum = st.top();
                st.pop();
                cout << popNum << endl;
            } else {
                cout << "-1" << endl;
            }
        } else if (command == "size") {
            cout << st.size() << endl;
        } else if (command == "empty") {
            cout << (st.empty() ? "1" : "0") << endl;
        }
    }

    return 0;
}
