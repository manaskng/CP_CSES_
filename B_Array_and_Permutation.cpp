#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
 
	int tc; cin >> tc;
	while(tc--) {
		int n; cin >> n;
		vector<int> v(n+1);
		for(int i = 1; i <= n; i++) {
			int x; cin >> x;
			v[x] = i;
		}
		vector<int> a(n);
		for(auto &x : a) cin >> x;
 
		bool pos = true;
		for(int i = 1; i < n; i++) {
			if(v[a[i-1]] > v[a[i]]) pos = false;
		}
 
		cout << (pos ? "YES" : "NO") << "\n";
	}
 
	return 0;
}