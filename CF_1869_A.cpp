#include <bits/stdc++.h>
using namespace std;



void solve() {
    int n;
    cin >> n;

    if (n % 2 == 0) {
        cout << 2 << "\n";
        cout << 1 << " " << n << "\n";
        cout << 1 << " " << n << "\n";
    } else {
        cout << 4 << "\n";
        cout << 1 << " " << n - 1 << "\n";
        cout << 1 << " " << n - 1 << "\n";
        cout << n - 1 << " " << n << "\n";
        cout << n - 1 << " " << n << "\n";
    }
}


int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}