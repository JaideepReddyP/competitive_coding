#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n; 
    cin >> n;
    vector<int> a(2*n);
    for(int i = 0; i < 2*n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    // for(int i : a) cout << i << ' ';
    // cout << '\n';

    int ans = 0;
    for(int i = 0; i < n-1; i++) {
        ans += a[i+1] - a[i];
        ans += a[n+i+1] - a[n+i];
    }
    cout << ans << '\n';
    for(int i = 0; i < n; i++) {
        cout << a[i] << ' ' << a[n+i] << '\n';
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
}