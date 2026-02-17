#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<vector<char>> grid(n, vector<char>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> grid[i][j];

    vector<pair<int,int>> current;
    current.push_back({0,0});

    string ans;
    ans += grid[0][0];

    vector<vector<bool>> visited(n, vector<bool>(n, false));
    visited[0][0] = true;

    for (int step = 1; step <= 2*n - 2; step++) {

        char best = 'z';

        // find smallest next character
        for (auto [i,j] : current) {

            if (i + 1 < n)
                best = min(best, grid[i+1][j]);

            if (j + 1 < n)
                best = min(best, grid[i][j+1]);
        }

        vector<pair<int,int>> next;

        for (auto [i,j] : current) {

            if (i + 1 < n && grid[i+1][j] == best && !visited[i+1][j]) {
                visited[i+1][j] = true;
                next.push_back({i+1, j});
            }

            if (j + 1 < n && grid[i][j+1] == best && !visited[i][j+1]) {
                visited[i][j+1] = true;
                next.push_back({i, j+1});
            }
        }

        ans += best;
        current = move(next);
    }

    cout << ans << "\n";

    return 0;
}

//tle on this one n
// vector<vector<string>>dp;
// vector<vector<bool>>vis;

//  string minpath(int i, int j, vector<vector<char>>& grid, int n) {

//     if (i == n - 1 && j == n - 1)
//         return string(1, grid[i][j]);

//     if (vis[i][j])
//         return dp[i][j];
// // if not visited then mark visited 
//     vis[i][j] = true;

//     string right = "~";
//     string down = "~";

//     if (j < n - 1)
//         right = minpath(i, j + 1, grid, n);

//     if (i < n - 1)
//         down = minpath(i + 1, j, grid, n);

//     dp[i][j] = string(1, grid[i][j]) + min(right, down);

//     return dp[i][j];
// }

// int main() {
//     int n;
//     cin>>n;
//     vector<vector<char>>grid(n,vector<char>(n));
//     // took the input 
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cin>>grid[i][j];
//         }
//     }
//     dp.assign(n,vector<string>(n));
//     vis.assign(n,vector<bool>(n,false));
//     string ans=minpath(0,0,grid,n);
//     cout<<ans<<"\n";
//     return 0;
// }