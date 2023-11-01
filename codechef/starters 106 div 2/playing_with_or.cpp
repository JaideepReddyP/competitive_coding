#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n+1, 0);
    for(int i = 0; i < n; i++) cin >> a[i];

    int cnt = 0;
    for(int i = 0; i < k; i++) {
        if(a[i] % 2) {
            cnt++;
        }
    };

    int ans = 0;
    for(int i = 0; i <= n-k; i++) {
        // cout << cnt << ' ';
        if(cnt) {
            ans++;
        } 
        if(a[i]%2) {
            cnt--;
        }
        if(a[i+k]%2) {
            cnt++;
        }
    }
    cout << ans << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
}