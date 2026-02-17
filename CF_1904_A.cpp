#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        int xK, yK, xQ, yQ;
        cin >> xK >> yK; 
        cin>> xQ >> yQ;

        vector<pair<int, int>> moves = {
            {a, b}, {a, -b}, {-a, b}, {-a, -b},
            {b, a}, {b, -a}, {-b, a}, {-b, -a}
        };

        set<pair<int, int>> kingAttacks;
        set<pair<int, int>> queenAttacks;

        for (auto it : moves) {
            kingAttacks.insert({xK + it.first, yK + it.second});
            queenAttacks.insert({xQ + it.first, yQ + it.second});
        }

        int count = 0;
        for (auto pos : kingAttacks) {
            if (queenAttacks.count(pos)) {
                count++;
            }
        }

        cout << count << "\n";
    }
    return 0;
}
