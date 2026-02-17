#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

// void solve() {
    
// }

int main() {
    fastio;
    int t ;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int>nums(n+1);
        for(int i=1;i<=n;i++){
            cin>>nums[i];
        }
        vector<int>diff(n+1);
        for(int i=1;i<=n;i++){
            diff[i]=abs(nums[i]-i);

        }
        int maxcnt=INT_MAX;
        for(auto it:diff){
            if()

        }
        
    }
    return 0;
}