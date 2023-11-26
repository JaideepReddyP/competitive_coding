#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int>a(n+2, 0);
    for(int i = 1; i <= n; i++) cin >> a[i];
    a[n+1] = a[n] + 2*(x-a[n]);
    
    int ans = -1;
    for(int i = 1; i < n+2; i++) {
        ans = max(ans, a[i]-a[i-1]);
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