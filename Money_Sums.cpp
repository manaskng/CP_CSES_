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

unordered_set<int>st;
vector<vector<bool>>vis;
// f is giving the sum of denominations 
void f(int i, int sum, int n,vector<int>&a){
    if(i==n){
        if(sum>0){
            st.insert(sum);
        }
        return; 
    }
    if(vis[i][sum]) return;
    vis[i][sum]=true; 
    f(i+1,sum,n,a);
    f(i+1,sum+a[i], n,a);


}

int main() {
    int n;
    cin>>n;
    vector<int>a(n);
    int total=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        total+=a[i];
        st.insert(a[i]);
    }
    vis.assign(n+1,vector<bool>(total+1,false));
    f(0,0,n, a);
    cout<<st.size()<<"\n";
    vector<int>ans;
    for(auto it:st){
        ans.push_back(it);
    }
    sort(ans.begin(),ans.end());
    for(auto it:ans){
        cout<<it<<" ";
    }
    
    return 0;
}