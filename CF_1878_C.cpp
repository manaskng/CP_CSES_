#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        long long n, k, x;
        cin >> n >> k >> x;
        
        // Min sum of k distinct numbers from 1 to n
        long long min_sum = k * (k + 1) / 2;
        
        // Max sum of k distinct numbers from 1 to n
        long long max_sum = k * (2 * n - k + 1) / 2;
        
        if (x >= min_sum && x <= max_sum) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
