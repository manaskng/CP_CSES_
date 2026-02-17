#include <bits/stdc++.h>
using namespace std;

// #define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// #define ll long long
// #define ull unsigned long long
// #define pb push_back
// #define vi vector<int>
// #define vll vector<long long>
// #define pii pair<int, int>
// #define all(x) (x).begin(), (x).end()
// #define F first
// #define S second

// #ifndef ONLINE_JUDGE
// #define debug(x) cerr << #x << " = "; _print(x); cerr << endl;
// #else
// #define debug(x)
// #endif

// void _print(int x) {cerr << x;}
// void _print(long long x) {cerr << x;}
// void _print(char x) {cerr << x;}
// void _print(string x) {cerr << x;}
// void _print(bool x) {cerr << (x ? "true" : "false");}
// template <class T, class V> void _print(pair<T, V> p) {cerr << "{"; _print(p.F); cerr << ","; _print(p.S); cerr << "}";}
// template <class T> void _print(vector<T> v) {cerr << "["; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T> void _print(set<T> s) {cerr << "{"; for (T i : s) {_print(i); cerr << " ";} cerr << "}";}

// const int MOD = 1e9 + 7;
// const int INF = 1e9;
// const int MAXN = 2e5 + 5;


int main() {
    int t ;
    cin >> t;
    while (t--) {
    int N;
    cin>>N;
    vector<int>nums(N);
    for(int i=0;i<N;i++){
        cin>>nums[i];
    }
    int ops=0;
    for(int i=N-1;i>0;i--){
        if(nums[i]==0){
            cout<<-1<<endl;
            break;
        }
        while(nums[i]>0&&nums[i-1]>=nums[i]){
            nums[i-1]/=2;
            ops++;
        }

    }
    cout<<ops<<endl;
    }
    return 0;
}