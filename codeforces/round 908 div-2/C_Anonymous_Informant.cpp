#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> b(n);
    for(int i = 0; i < n; i++) cin >> b[i];

    vector<int> dp(n, 0);

    int p = n-1;
    for(int i = 0; i < k; i++) {
        if(dp[p]++) break;
        // cout << p << ' ';
        if(b[p] > n) {
            cout << "No\n";
            return;
        }
        p = (p - b[p]);
        if(p < 0) {
            p += n;
        }
    }
    cout << "Yes\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
}