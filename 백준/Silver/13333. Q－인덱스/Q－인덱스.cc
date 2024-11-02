#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> citations(n);
    for (int i = 0; i < n; i++) {
        cin >> citations[i];
    }

    sort(citations.rbegin(), citations.rend());

    int q_index = 0;

    for (int k = 1; k <= n; k++) {
        if (citations[k - 1] >= k) {
            q_index = k;
        } else {
            break;
        }
    }

    cout << q_index << '\n';

    return 0;
}
