#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, j, k;
    cin >> n >> j >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    int target = a[j - 1];

    // Count how many players are strictly stronger than j
    int s = 0;
    for (int val : a) {
        if (val > target)
            s++;
    }

    // If player j is ranked within top k, they can survive
    if (s < k)
        cout << "YES\n";
    else
        cout << "NO\n";
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