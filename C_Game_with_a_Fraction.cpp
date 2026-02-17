#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);

	int tc; cin >> tc;
	while(tc--) {
		ll x, y; cin >> x >> y;
		if(x >= y) {
			cout << "Alice\n"; continue;
		}
		ll d = y - x;
		if(x >= 2*d && y >= 3*d) cout << "Bob\n";
		else cout << "Alice\n";
	}

	return 0;
}