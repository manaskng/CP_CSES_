#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int solve(int n, int x, vector<int>& ans) {
    int maxi = ans[0];
    for (int i = 0; i < n - 1; i++) {
        maxi = max(maxi, ans[i + 1] - ans[i]);
    }
    maxi = max(maxi, 2 * (x - ans[n - 1]));
    return maxi;
}

int main() {
    fastio;
    int t = 1;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> ans(n);
        for (int i = 0; i < n; i++) cin >> ans[i];
        
        cout << solve(n, x, ans) << "\n";
    }

    return 0;
}
