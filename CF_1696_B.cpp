#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;

    int segments = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] != 0 && (i == 0 || a[i - 1] == 0)) {
            segments++;
        }
    }

    cout << min(2, segments) << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
