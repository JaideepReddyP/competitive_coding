#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    map<int, vector<int>> dp;
    for(int i = 0; i < n; i++) {
        dp[a[i]].push_back(i);
    }

    if(dp.size() < 2) {
        cout << -1 << '\n';
        return;
    }

    vector<int> ans(n, 1);
    int cnt = 0;
    for(auto p : dp) {
        if(cnt >= 2) break;
        // cout << p.first << ' ' << p.second.size() << '\n';
        if(p.second.size() >= 2) {
            ans[p.second.front()] = cnt+2;
            cnt++;
        }
    }
    if(cnt >= 2) {
        for(int i : ans) cout << i << ' ';
        cout << '\n';
    } else {
        cout << -1 << '\n';
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
}