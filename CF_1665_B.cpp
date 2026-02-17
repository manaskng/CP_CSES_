#include <bits/stdc++.h>
using namespace std;



int main() {
    int t ;
    cin >> t;
    while (t--) {
        int n;
    cin>>n;
    vector<int>arr(n);
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mpp[arr[i]]++;
    }
    int maxfreq=INT_MIN;
    for(auto it:mpp){
        maxfreq=max(maxfreq,it.second);
    }
    int ops=0;
    while(maxfreq<n){

        ops++;
        if(n-maxfreq>=maxfreq){
            ops+=maxfreq;
            maxfreq*=2;
        }
        else{
            ops+=n-maxfreq;
            maxfreq=n;
        }
    }
    cout<<ops<<endl;

    }
    return 0;
}