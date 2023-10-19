#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n, m; 
    cin >> n >> m;
    vector<int> a(n);
    vector<int> dp(m+1);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        dp[a[i]] = 1;
    }
    int p = 1;
    while(dp[p] == 1) p++;

    cout << a[0];
    int cnt = 1;
    for(int i = 0; i < n; i++) {
        cout << ' ';
        if(dp[a[i]] == 2) {
            cout << p;
            while(dp[p]) p++;
        } else {
            cout << a[i];
            dp[a[i]] = 2;
        }
    }
    cout << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
}