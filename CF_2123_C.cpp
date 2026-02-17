#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    vector<int> prefix_min(n);
    vector<int> suffix_max(n);

    prefix_min[0] = a[0];
    for (int i = 1; i < n; ++i)
        prefix_min[i] = min(prefix_min[i - 1], a[i]);

    suffix_max[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; --i)
        suffix_max[i] = max(suffix_max[i + 1], a[i]);

    string res(n, '0');
    for (int i = 0; i < n; ++i) {
        if (a[i] == prefix_min[i] || a[i] == suffix_max[i])
            res[i] = '1';
    }

    cout << res << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}