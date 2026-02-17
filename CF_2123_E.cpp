#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> freq(n + 2, 0); // count of each value
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        freq[a[i]]++;
    }

    vector<int> possible(n + 2, 0); // possible[k] = how many MEX can be made with exactly k deletions
    int required = 0;
    bool valid = true;

    for (int mex = 0; mex <= n; ++mex) {
        if (mex > 0 && freq[mex - 1] == 0) {
            valid = false; // we are missing a value from 0..mex-1
        }

        if (!valid) break;

        int total_deletions = required + freq[mex]; // remove all freq[mex] to make it the MEX
        if (total_deletions <= n) {
            possible[total_deletions]++;
        }

        // From 0 to mex, keep 1 of each, remove rest
        if (mex < n + 1) {
            required += max(0, freq[mex] - 1);
        }
    }

    // Reverse prefix sum to count how many MEX values possible at or after k deletions
    for (int i = n; i >= 0; --i) {
        possible[i] += possible[i + 1];
    }

    for (int i = 0; i <= n; ++i) {
        cout << possible[i] << " ";
    }
    cout << "\n";
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
