#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<ll> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    vector<vector<ll>> dp(n, vector<ll>(n));

    // base case
    for(int i = 0; i < n; i++)
        dp[i][i] = a[i];

    // length from 2 to n
    for(int len = 2; len <= n; len++) {
        for(int l = 0; l + len - 1 < n; l++) {
            int r = l + len - 1;

            ll take_left =
                a[l] +
                min(
                    (l+2 <= r ? dp[l+2][r] : 0),
                    (l+1 <= r-1 ? dp[l+1][r-1] : 0)
                );

            ll take_right =
                a[r] +
                min(
                    (l <= r-2 ? dp[l][r-2] : 0),
                    (l+1 <= r-1 ? dp[l+1][r-1] : 0)
                );

            dp[l][r] = max(take_left, take_right);
        }
    }

    cout << dp[0][n-1];
}
