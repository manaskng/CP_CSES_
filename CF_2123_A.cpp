#include <bits/stdc++.h>
using namespace std;

void solve(int n) {
    int count[4] = {0};
    for (int i = 0; i < n; ++i) {
        count[i % 4]++;
    }

    int pair_03 = min(count[0], count[3]);
    int pair_12 = min(count[1], count[2]);

    int total_rounds = pair_03 + pair_12;

    if (total_rounds % 2 == 1) {
        cout << "Alice\n";
    } else {
        cout << "Bob\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        solve(n);
    }
}