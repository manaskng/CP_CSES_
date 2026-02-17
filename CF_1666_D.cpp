#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s, t;
        cin >> s >> t;
        int m = s.size();
        int n = t.size();

        map<char,int> mpp1, mpp2;
        for (char c : s) mpp1[c]++;
        for (char c : t) mpp2[c]++;   

        int i = 0, j = 0;
        while (i < m && j < n) {
            if (s[i] == t[j]) {
                if (mpp1[s[i]] < mpp2[t[j]]) break;
                if (mpp1[s[i]] == mpp2[t[j]]) {
                    mpp2[t[j]]--;   
                    j++;
                }
            }
            mpp1[s[i]]--;
            i++;
        }

        cout << (j == n ? "YES" : "NO") << "\n";
    }
    return 0;
}
