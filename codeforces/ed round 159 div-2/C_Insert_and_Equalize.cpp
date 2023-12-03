#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    if(n == 1) {
        cout << 1 << '\n';
        return;
    }

    sort(a.begin(), a.end());
    int g = a[1] - a[0];
    for(int i = 1; i < n-1; i++) g = gcd(g, a[i+1]-a[i]);
    // cout << g << ' ';

    int ans = 0;
    for(int i = 0; i < n; i++) {
        ans += (a[n-1]-a[i])/g;
    }
    // cout << ans << ' ';

    int num = a[n-1];
    for(int i = n-1; i >= 0; i--) {
        if(a[i] == num) {
            num -= g;
            ans++;
        } else {
            break;
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