#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);



int main() {
    fastio;
    int t;
     cin >> t;

    while (t--) {
        int n,k;
        cin>>n >>k;
        string s;
        cin >> s;
        unordered_map<char,int>freq;
       
        for (char c : s) {
            freq[c]++;
        }
        int cntodd=0,cnteven=0;//tracking odd and even frequencies
        for(auto it :freq){
            if(it.second % 2 != 0) {
                cntodd++;
            }
            else {
                cnteven++;
            }
        }

        int mod=(n-k)%2;
        if(mod==0){
            if(k>=cntodd&&(k-cntodd)%2==0) {  
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }


        }
        else{
            if(cntodd-k==1||((k>cntodd)&&(k-cntodd)%2==1)) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }

        
    }
    return 0;
}