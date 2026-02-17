#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    string s;
    cin >> n >> k >> s;

    int cnt1 = count(s.begin(), s.end(), '1');

    if (cnt1 <= k) {
        cout << "Alice\n";
        return;
    }

    // Simulate one optimal Alice move (remove any k ones)
    // She sets any k positions with '1' to '0'
    int toRemove = k;
    string t = s;
    for (int i = 0; i < n && toRemove > 0; i++) {
        if (t[i] == '1') {
            t[i] = '0';
            toRemove--;
        }
    }

    // Now check if Bob has any k-length substring of all 0s
    bool bobCanUndo = false;
    int zeroCount = 0;
    for (int i = 0; i < k; i++) {
        if (t[i] == '0') zeroCount++;
    }
    if (zeroCount == k) bobCanUndo = true;

    for (int i = k; i < n; i++) {
        if (t[i] == '0') zeroCount++;
        if (t[i - k] == '0') zeroCount--;
        if (zeroCount == k) {
            bobCanUndo = true;
            break;
        }
    }

    if (bobCanUndo) {
        cout << "Bob\n";
    } else {
        cout << "Alice\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
