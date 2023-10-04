#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    n++;
    vector<int> a(n, 0), h(n, INT_MAX);
    for(int i = 1; i < n; i++) cin >> a[i];
    for(int i = 1; i < n; i++) cin >> h[i];

    int sum = 0, s = 1, e = 1, ans = 0;
    for(; e < n; e++) {
        if(h[e-1]%h[e] == 0) {
            // cout << "l ";
            sum += a[e];
            if(sum <= k) { 
                // cout << "l ";
                ans = max(ans, e-s+1);
            } else {
                // cout << "g ";
                while(sum > k) {
                    sum -= a[s];
                    s++;
                }
            }
        } else {
            // cout << "g ";
            s = e;
            sum = 0;
            h[e-1] = h[e];
            e--;
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