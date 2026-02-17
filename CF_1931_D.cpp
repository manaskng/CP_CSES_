#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if(!(cin >> t)) return 0;
    while (t--) {
        int n;
        long long x, y;
        cin >> n >> x >> y;
        vector<long long> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        // group by a[i] % y
        unordered_map<long long, vector<long long>> groups;
        groups.reserve(n * 2);
        for (int i = 0; i < n; ++i) {
            long long r = ((a[i] % y) + y) % y;
            groups[r].push_back(a[i]);
        }

        long long ans = 0;
        // For each group, count residues modulo x
        for (auto &kv : groups) {
            auto &vec = kv.second;
            // map residue modulo x to frequency
            unordered_map<long long, long long> cnt;
            cnt.reserve(vec.size()*2 + 1);
            for (long long val : vec) {
                long long rx = ((val % x) + x) % x;
                ++cnt[rx];
            }

            // process residues without double counting
            // collect keys to iterate
            vector<long long> keys;
            keys.reserve(cnt.size());
            for (auto &p : cnt) keys.push_back(p.first);

            for (long long r : keys) {
                long long cr = ((x - r) % x + x) % x; // complement residue
                if (cnt[r] == 0) continue; // already used
                if (r == cr) {
                    long long c = cnt[r];
                    ans += c * (c - 1) / 2;
                    cnt[r] = 0;
                } else {
                    long long c1 = cnt[r];
                    long long c2 = 0;
                    auto it = cnt.find(cr);
                    if (it != cnt.end()) c2 = it->second;
                    ans += c1 * c2;
                    cnt[r] = 0;
                    if (it != cnt.end()) cnt[cr] = 0;
                }
            }
        }

        cout << ans << '\n';
    }
    return 0;
}
