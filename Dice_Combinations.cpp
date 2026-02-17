#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int MOD = 1e9 + 7;
const int INF = 1e9;
const int MAXN = 2e5 + 5;


int rec(int sum,int n,vector<int>&dp){
    if(sum>n)return 0;
    if(sum==n)return 1;
    if(dp[sum]!=0)return dp[sum];
    int curr=0;
    for(int i=1;i<=6;i++){
        curr=(curr+rec(sum+i,n,dp))%MOD;
    }
    return  dp[sum]=curr;
}
int main() {
    fastio;
    int n;
    cin>>n;
    vector<int> dp(n+1,0);
    cout<<rec(0,n,dp)<<endl;
    
    return 0;
}