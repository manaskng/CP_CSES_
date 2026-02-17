#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int maxStreak = 0, currentStreak = 0;
        char last = '?';

        for (int i = 0; i < n; ++i) {
            if (s[i] == last) {
                currentStreak++;
            } else {
                currentStreak = 1;
                last = s[i];
            }
            maxStreak = max(maxStreak, currentStreak);
        }

        cout << (maxStreak + 1) << '\n';
    }
    return 0;
}
