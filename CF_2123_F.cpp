#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n + 1);
        vector<bool> used(n + 2);

        p[1] = 1;
        used[1] = true;

        for (int i = 2; i <= n; ++i) {
            bool found = false;
            for (int x = 2; x <= n; ++x) {
                if (!used[x] && __gcd(x, i) > 1 && x != i) {
                    p[i] = x;
                    used[x] = true;
                    found = true;
                    break;
                }
            }

            if (!found) {
                p[i] = i;
                used[i] = true;
            }
        }

        for (int i = 1; i <= n; ++i)
            cout << p[i] << " ";
        cout << '\n';
    }

    return 0;
}