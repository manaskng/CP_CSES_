#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        if (N % 2 == 1 || N < 4) {
            cout << -1 << " " << -1 << "\n";
        } else {
            int mini = (N + 5) / 6; // ceil(N/6)
            int maxi = N / 4;
            cout << mini << " " << maxi << "\n";
        }
    }
    return 0;
}
