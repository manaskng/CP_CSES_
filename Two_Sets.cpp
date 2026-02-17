#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define ull unsigned long long
#define pb push_back
#define vi vector<int>
#define vll vector<long long>
#define pii pair<int, int>
#define all(x) (x).begin(), (x).end()
#define F first
#define S second

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(int x) {cerr << x;}
void _print(long long x) {cerr << x;}
void _print(char x) {cerr << x;}
void _print(string x) {cerr << x;}
void _print(bool x) {cerr << (x ? "true" : "false");}
template <class T, class V> void _print(pair<T, V> p) {cerr << "{"; _print(p.F); cerr << ","; _print(p.S); cerr << "}";}
template <class T> void _print(vector<T> v) {cerr << "["; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set<T> s) {cerr << "{"; for (T i : s) {_print(i); cerr << " ";} cerr << "}";}

const int MOD = 1e9 + 7;
const int INF = 1e9;
const int MAXN = 2e5 + 5;


// bool rec(int i, int len, int sum){
//     if(sum==0) return true;
//     if(sum<0||i>sum) return false;
//     bool skip=rec(i+1,len,sum);
//     bool take=false;
//     take=rec(i+1,len+1,sum-(i+1));
//     return skip||take;
// }
void solve() {
   int n;
   cin >> n;

   long long sum = 1LL * n * (n + 1) / 2;

   if (sum % 2) {
       cout << "NO\n";
       return;
   }

   vector<int> set1, set2;
   long long sum2 = sum / 2;

   for (int i = n; i >= 1; i--) {
       if (sum2 >= i) {
           set1.push_back(i);
           sum2 -= i;
       } else {
           set2.push_back(i);
       }
   }

   cout << "YES\n";

   cout << set1.size() << "\n";
   for (int x : set1) cout << x << " ";
   cout << "\n";

   cout << set2.size() << "\n";
   for (int x : set2) cout << x << " ";
   cout << "\n";
}


int main() {
    fastio;
        solve();
    
    return 0;
}